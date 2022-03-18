#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool bfs(int i,vector<int>adj[],int colour[]){
        queue<int>q;
        q.push(i);
        colour[i]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
        for(auto it:adj[node]){
            if(colour[it]==-1){
                colour[it]=1-colour[node];
                q.push(it);
            }else if(colour[it]==colour[node]) return false;
        }
    }
     return true;
}
public:
    bool isBipartite(int V, vector<int>adj[]){
        int colour[V];
        for(int i=0;i<V;i++){
            colour[i]=-1;
        }
        
        for(int i=0;i<V;i++){
            if(colour[i]==-1){
                if(!bfs(i,adj,colour)) return false;  
            }
        }
        return true;
    }

};

// { Driver Code Starts.
int main(){
     #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    int tc;
    cin >> tc;
    while(tc--){
        int V, E;
        cin >> V >> E;
        vector<int>adj[V];
        for(int i = 0; i < E; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isBipartite(V, adj);    
        if(ans)cout << "1\n";
        else cout << "0\n";  
    }
    return 0;
}  