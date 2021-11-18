#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printGrid (vector<vector<int>>& grid) 
    {
          for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
    }
vector<string>ans;
int m,n;
string dir="DLRU";
int di[]={1,0,0,-1};
int dj[]={0,-1,1,0};
bool findPath(int i,int j ,string str,vector<vector<int>>&vis,vector<vector<int>>&arr){
    if(i>=n or j>=m or i<0 or j<0 or vis[i][j]==1 or arr[i][j]==1) return false;
    if(i==n-1 and j==m-1){
        cout<<i<<" "<<j<<endl;
        ans.push_back(str);
        return true;
    }
    vis[i][j]=1;
  for(int x=0;x<4;x++){
        str+=dir[x];
        
        if(findPath(i+di[x],j+dj[x],str,vis,arr)==true) return true;
    
        str.pop_back();
    }

    vis[i][j]=0;
    return false;
}
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str="";
    cin>>m>>n;
    vector<vector<int>>vis(n,vector<int>(m,0));
    vector<vector<int>>arr{{0,1,0,0},
                           {0,0,0,1},
                           {1,0,1,0}, 
                           {1,0,0,0},
                           {1,1,0,0}};
    findPath(0,0,str,vis,arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
    printGrid(arr);
    cout<<endl;

return 0;
}