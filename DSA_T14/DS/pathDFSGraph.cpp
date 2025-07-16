#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
/*

   5
   |
1--4--2
|  |
0--3

*/
using namespace std;

bool solve(const vector<int> mat[], int needle, int curr, vector<bool>& seen, vector<int>& prev) {
    
    if(seen[curr]) return false;
    
    seen[curr] = true;
   prev.push_back(curr);
   if(curr==needle) return true;

    // vector<int> list=mat[curr];
    // for (int i = 0; i < list.size(); ++i) {
    //     int edge=list[i];
    //     if(solve(mat, needle, edge, seen, prev)) return true;
    // }
   
       for(auto it:mat[curr]){
         if(solve(mat,needle,it,seen,prev)) return true;
       }
    prev.pop_back();
    return false;
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    
   

    int n;
    cin>>n;
     vector<int>edges[n];
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        // cout<<u<< " "<<v<<endl;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

 
    
    vector<bool> seen(n, false);
    vector<int> prev;
    
    int src,needle;
    cin>>src>>needle;
 
    bool isPathExists = solve(edges, needle, src, seen, prev);
   
   if(isPathExists){
    for(auto it:prev) cout<<it<<" " ;
   }else{
    cout<<"OHHHHHHHH";
   }

    return 0;
}
