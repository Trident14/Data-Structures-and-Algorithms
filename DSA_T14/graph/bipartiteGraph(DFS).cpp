#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool checkBipartite(vector<int>adj[],int colour[],int node){
        if(colour[node]==-1) colour[node]=1;
        for(auto it: adj[node]){
            if(colour[it]==-1){
                colour[it]=1-colour[node];
                if(!checkBipartite(adj,colour,it)) return false;
            }else if(colour[it]==colour[node]) return false;
        }
        return true;
    }
public:
	bool isBipartite(int V, vector<int>adj[]){
	    int colour[V];
	    for(int i=0;i<V;i++) colour[i]=-1;
	    for(int i=0;i<V;i++){
	        if(colour[i]==-1){
	            if(!checkBipartite(adj,colour,i)) return false;
	        }
	    }
	    return true;
	}

};

int main(){
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