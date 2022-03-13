//DFS Traversal 

void dfs(int node,vecot<int>&dfs,vector<int>adj[]){
    dfs.push_back(node);
    vis[node]=true;
    for(auto it:adj[node]){
        if(!vis[it]) dfs(it);
    }
}
vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       vector<int> dfs; 
        vector<int> vis(V, 0); 
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,dfs,adj);
            }
        }
        
        return dfs;
    }