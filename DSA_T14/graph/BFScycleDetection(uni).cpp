class Solution {
    bool bfs(int node,vector<int>adj[],vector<bool>&vis){
        queue<pair<int,int>>q;
        vis[node]=true;
        q.push({node,-1});
        
        while(!q.empty()){
            auto it=q.front().first;
            int prev=q.front().second;
            q.pop();
            
            for(auto x: adj[it]){
                if(!vis[x]){
                    vis[x]=true;
                    q.push({x,it});
                }
                else if(prev!=x)
                    return true;
                }
        }
        return false;
        
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool>vis(V+1,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
               if(bfs(i,adj,vis)) return true;
            }
        }
        return false;
    }
};
