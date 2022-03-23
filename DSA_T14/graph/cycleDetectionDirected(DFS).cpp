bool check(int ind, vector<int>&dfs, vector<int>&vis,vector<int>adj[]){
        vis[ind]=1; // mark as visited
        dfs[ind]=1;  // set 1 in current dfs path
        for(int i:adj[ind]){ // explore all adjacent nodes 
            if(!vis[i]){  // if not visited
              
                if(check(i,dfs,vis,adj)){  // call for the node
                    return true;
                }
               
            }
            else{
                if(dfs[i]==1)  // if already visited, and is also part of the current dfs path
                return true;v// means cycle
            }
        }
        dfs[ind]=0;  // during backtrack, remove the node from current dfs path
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>dfs(V,0);
        for(int i=0;i<V;i++){ // for each component
            if(!vis[i]){
                if(check(i,dfs,vis,adj))
                return true;
            }
        }
        return false;
    }