#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// Indexed Priority Queue implementation
class IndexedPQ {
private:
    vector<int> pq;  // Priority queue that stores indices
    vector<int> qp;  // Inverse: qp[pq[i]] = i
    vector<int> key; // Keys: key[i] = priority of vertex i
    int size;

    void swap(int i, int j) {
        std::swap(pq[i], pq[j]);
        qp[pq[i]] = i;
        qp[pq[j]] = j;
    }

    void swim(int k) {
        while (k > 1 && key[pq[k / 2]] > key[pq[k]]) {
            swap(k, k / 2);
            k = k / 2;
        }
    }

    void sink(int k) {
        while (2 * k <= size) {
            int j = 2 * k;
            if (j < size && key[pq[j]] > key[pq[j + 1]]) j++;
            if (key[pq[k]] <= key[pq[j]]) break;
            swap(k, j);
            k = j;
        }
    }

public:
    IndexedPQ(int n) {
        qp.resize(n, -1);
        pq.resize(n+1);
        key.resize(n, numeric_limits<int>::max());
        size = 0;
    }

    void insert(int i, int priority) {
        size++;
        qp[i] = size;
        pq[size] = i;
        key[i] = priority;
        swim(size);
    }

    void changeKey(int i, int newPriority) {
        key[i] = newPriority;
        swim(qp[i]);
        sink(qp[i]);
    }

    bool contains(int i) {
        return qp[i] != -1;
    }

    int delMin() {
        int min = pq[1];
        swap(1, size--);
        sink(1);
        qp[min] = -1;
        return min;
    }

    bool isEmpty() {
        return size == 0;
    }

    int getPriority(int i) {
        return key[i];
    }
};

// Prim's algorithm to find the Minimum Spanning Tree (MST)
int primMST(int V,vector<vector<int>> adj[]) {
    
    vector<int> edgeTo(V, -1);          // Tracks the edge to the MST
    vector<bool> marked(V, false);      // True if vertex is included in the MST
    IndexedPQ ipq(V);                   // Indexed priority queue
    int mstWeightSum = 0;               // Sum of the weights of the MST

    ipq.insert(0, 0);                   // Start with vertex 0 and priority 0

    while (!ipq.isEmpty()) {
        int v = ipq.delMin();           // Get the vertex with the smallest distance
        
        if(marked[v]) continue;
        marked[v] = true;               // Mark it as part of the MST
        mstWeightSum += ipq.getPriority(v); // Add the weight of the edge to the sum

        // For each adjacent edge to v
        for (const vector<int>& edge : adj[v]) {
            int w = edge[0];            // Destination vertex
            int weight = edge[1];       // Edge weight

            // If w is already in the MST, skip it
            //if (marked[w]) continue;

            // If the edge weight is smaller than the known distance in the priority queue
            if (!marked[w] && weight < ipq.getPriority(w)) {
                edgeTo[w] = v;          // Track the edge to the MST

                // If w is already in the priority queue, update its key
                if (ipq.contains(w)) {
                    ipq.changeKey(w, weight);
                } else {
                    ipq.insert(w, weight);  // Otherwise, insert w into the queue
                }
            }
        }
    }

    return mstWeightSum;                // Return the sum of the weights in the MST
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    // Example graph (Adjacency List)
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }

    // Run Prim's algorithm and get the MST weight sum
    int mstWeight = primMST(V,adj);

    // Print the total weight of the MST
    cout << "Sum of weights of edges in the MST: " << mstWeight << endl;
}
    return 0;
}

