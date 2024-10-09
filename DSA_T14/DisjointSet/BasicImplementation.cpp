#include<iostream>
using namespace std;
/* Total time : O(n^2) 
    unite take O(n) for each call
    n is toatl no of elements if we unite all elements then
    we call unite() n times => O (n^2)

*/

class DisjointSet
{
    int *arr;
    int size;
    int cap;
    
public:
    DisjointSet(int n){
        arr=new int [n+1];
        size=0;
        cap=n;
        
        for(int i=1;i<=n;i++)
        {
            arr[i]=i;
        }
    }
    
    //O(1)
    int find(int x)
    {
        return arr[x];
    }
    
    
    //O(N)
    void unite(int x,int y)
    {
        int parent_x=find(x);
        int parent_y=find(y);
        
        for(int i=1;i<=cap;i++)
        {
            if(arr[i]==parent_x)
            {
                arr[i]=parent_y;
            }
        }
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