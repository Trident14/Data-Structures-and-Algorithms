#include <iostream>
#include<vector>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    int n, m;
    cin >> n >> m; 
    
    vector<int> adj[n+1]; 
   
    for(int i = 0;i<m;i++) {
        int u, v; 
        cin >> u >> v;
        adj[u].push_back(v); 
        adj[v].push_back(u); 
    }
    
    for(int i=0;i<n+1;i++){
        for(auto it: adj[i]){
            cout<<i<<" : "<<it<<"\n";
        }
    }
    return 0;
}