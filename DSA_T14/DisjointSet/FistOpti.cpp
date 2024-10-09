#include<iostream>
#include <unordered_map>
using namespace std;
/*
 Total time taken {Union all elements} O(nlog n) 
 As at max we only take less elements 
 After each union, the size of the set containing the element
  grows exponentially. 
  The size progression looks like this: 1, 2, 4, 8, 16, ..., and 
  so on until the size of the set reaches or exceeds n.
*/
class DisjointSet
{
    int *arr;
    int size;
    int cap;
    unordered_map<int,vector<int>>parentMap;
    
public:
    DisjointSet(int n){
        
        arr=new int [n+1];
        size=0;
        cap=n;
        
        for(int i=1;i<=n;i++)
        {
            arr[i]=i;
            parentMap[i]={i};
        }
    }
    
    int find(int x)
    {
        return arr[x];
    }
    
    void unite(int x,int y)
    {
        int parent_x=find(x);
        int parent_y=find(y);
        if(parentMap[x].size()>parentMap[y].size())
        {
            swap(parent_x,parent_y);
        }
        
        for(auto i:parentMap[parent_x])
        {
            arr[i]=parent_y;
            parentMap[parent_y].push_back(i);
        }
         parentMap.erase(parent_x);
        
    }
};
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt", "w", stdout);  //file output.txt is opened in writing mode i.e "w"
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