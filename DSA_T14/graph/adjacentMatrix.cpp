#include <iostream>
#include<vector>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
   
  // n: no of nodes, m: no of edges
  /* Undirected Graph
    
    1 - 2
    | \ | \
    |  \|  4
    5 - 3 / 

  */
  int n,m;
  cin>>n>>m;
  vector<vector<int>>adj(n+1,vector<int>(n+1));
  //int adj[n+1][n+1]={0};
  for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u][v]=1;
    adj[v][u]=1;
  }

  //printing 
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<"\n";
  }
    return 0;
}