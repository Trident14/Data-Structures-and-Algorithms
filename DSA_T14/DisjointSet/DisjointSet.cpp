#include<iostream>
#include <unordered_map>
#include <numeric>
using namespace std;
/*Path compression + Rank heuristic  
o(a(m,n)) a-> inverse ackermann function
nearly constant

*/
class DisjointSet {
    int *arr;   // Parent array
    int *rank;  // Rank array (for union by rank)

    
public:
    DisjointSet(int n) {
        // Initialize the parent and rank arrays
        arr = new int[n + 1];
        rank = new int[n + 1];
        fill(rank, rank + n + 1, 1);  // Initialize all ranks to 1
        
        // Each element is its own parent initially
        iota(arr,arr+n+1,0);
    }

    // Find function with path compression
    int find(int x) {
        //Recursive Way:
        // if(arr[x]!=x){
        //     arr[x]=find(arr[x]);
        // }
        // return x;
        
        //Iterative Way:
        int y=x;
        while(arr[y]!=y){
            y=arr[y];
        }
        while(arr[x]!=x)
        {
            int z=arr[x];
            arr[x]=y;
            x=z;
        }
        return x;
    }

    // Union by rank
    void unite(int x, int y) {
        int parent_x = find(x);
        int parent_y = find(y);
        
        if (rank[parent_x] > rank[parent_y]) {
            swap(parent_x,parent_y);
        }
        
        arr[parent_x] = parent_y;
        if (rank[parent_x] ==rank[parent_y]) {  
            rank[parent_y]++;  
        }
    }
};

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);  // file input.txt is opened in reading mode i.e "r"
        freopen("output.txt", "w", stdout);  // file output.txt is opened in writing mode i.e "w"
    #endif
        
    DisjointSet ds(5);

    // Perform some test unions
    ds.unite(1, 2);
    ds.unite(3, 4);

    // Test find operations and print the results
    cout << "Find(1): " << ds.find(1) << endl;
    cout << "Find(2): " << ds.find(2) << endl;
    cout << "Find(3): " << ds.find(3) << endl;
    cout << "Find(4): " << ds.find(4) << endl;
    cout << "Find(5): " << ds.find(5) << endl;

    // Test union operation between two different sets
    ds.unite(2, 3);

    // Test find after union
    cout << "After union(2, 3):" << endl;
    cout << "Find(1): " << ds.find(1) << endl;
    cout << "Find(2): " << ds.find(2) << endl;
    cout << "Find(3): " << ds.find(3) << endl;
    cout << "Find(4): " << ds.find(4) << endl;
    cout << "Find(5): " << ds.find(5) << endl;

    return 0;
}
