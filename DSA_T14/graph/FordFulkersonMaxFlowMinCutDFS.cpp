#include <iostream>
#include <cstring>
#include <queue>
#include <algorithm> // For std::min
using namespace std;

const int MAX_NODES = 100;  // Maximum number of nodes in the graph
int capacity[MAX_NODES][MAX_NODES];  // Capacity matrix
int flowmat[MAX_NODES][MAX_NODES];       // Flow matrix
bool visited[MAX_NODES];

// Depth First Search to find augmenting path
int dfs(int u, int t, int flow, int n) {
    if (u == t) return flow;  // If we reached the sink, return the flow

    visited[u] = true;  // Mark the current node as visited

    for (int v = 0; v < n; v++) {
        // If v is not visited and there's remaining capacity from u to v
        if (!visited[v] && capacity[u][v] > 0) {
            int newFlow = min(capacity[u][v], flow);  // Find the minimum flow
            int argument_flow = dfs(v, t, newFlow, n);  // Recur for the next node

            if (argument_flow > 0) {
                capacity[u][v] -= argument_flow;  // Update the capacity
                flowmat[u][v] += argument_flow;       // Update the flow
                flowmat[v][u] -= argument_flow;       // Update the reverse flow
                return argument_flow;               // Return the flow found
            }
        }
    }
    return 0;  // Return 0 if no flow can be sent
}

// Ford-Fulkerson method to find maximum flow
int fordFulkerson(int s, int t, int n) {
    int max_flow = 0;

    while (true) {
        memset(visited, false, sizeof(visited));  // Reset visited for each iteration
        int argument_flow = dfs(s, t, INT_MAX, n);  // Call dfs to find flow
        if (argument_flow == 0) break;  // No more augmenting paths
        max_flow += argument_flow;  // Add the flow found to the total max flow
    }
    return max_flow;  // Return the maximum flow
}

// Function to find and print the minimum cut
void findMinCut(int s, int n) {
    memset(visited, false, sizeof(visited));  // Reset visited array
    queue<int> q;
    q.push(s);  // Start BFS from source
    visited[s] = true;

    // Perform BFS to find reachable vertices from source
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v = 0; v < n; v++) {
            // If v is not visited and there's remaining capacity from u to v
            if (!visited[v] && capacity[u][v] > 0) {
                visited[v] = true;  // Mark v as visited
                q.push(v);  // Add v to the queue for further exploration
            }
        }
    }

    // Print the edges that form the min cut
    cout << "The minimum cut edges are:\n";
    for (int i = 0; i < n; i++) {
        if (visited[i]) {  // If reachable from source
            for (int j = 0; j < n; j++) {
                // Print edges from reachable to non-reachable nodes
                if (!visited[j] && flowmat[i][j] > 0) {
                    cout << "(" << i << ", " << j << ")\n";  // Edge from reachable to non-reachable
                }
            }
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); // Open input.txt for reading
        freopen("output.txt", "w", stdout); // Open output.txt for writing
    #endif
        
    int n = 6;  // Number of nodes

    // Initialize the capacity matrix (0 by default)
    memset(capacity, 0, sizeof(capacity));
    memset(flowmat, 0, sizeof(flowmat));  // Initialize the flow matrix to 0

    // Add edges with capacities
    capacity[0][1] = 16;  // Edge from 0 to 1 with capacity 16
    capacity[0][2] = 13;  // Edge from 0 to 2 with capacity 13
    capacity[1][2] = 10;  // Edge from 1 to 2 with capacity 10
    capacity[1][3] = 12;  // Edge from 1 to 3 with capacity 12
    capacity[2][1] = 4;   // Edge from 2 to 1 with capacity 4 (reverse edge)
    capacity[2][4] = 14;  // Edge from 2 to 4 with capacity 14
    capacity[3][2] = 9;   // Edge from 3 to 2 with capacity 9 (reverse edge)
    capacity[3][5] = 20;  // Edge from 3 to 5 with capacity 20
    capacity[4][3] = 7;   // Edge from 4 to 3 with capacity 7 (reverse edge)
    capacity[4][5] = 4;   // Edge from 4 to 5 with capacity 4

    int source = 0, sink = 5;

    int max_flow = fordFulkerson(source, sink, n);
    cout << "The maximum possible flow is " << max_flow << endl;

    findMinCut(source, n); // Find and print the minimum cut

    return 0;
}
