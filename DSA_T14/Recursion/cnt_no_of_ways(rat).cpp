#include<iostream>
#include<string>
#include<vector>
using namespace std;
int m,n;
string dir="DLRU";
int di[]={1,0,0,-1};
int dj[]={0,-1,1,0};
int findPath(int i,int j,string str,vector<vector<int>>&vis,vector<vector<int>>&arr){
    //one base case to check if we crossed boundary
    if(i>=n or j>=m or i<0 or j<0 or vis[i][j]==1 or arr[i][j]==0) return 0;
    if(i==n-1 and j==m-1){
        return 1;
    }
    vis[i][j]=1;
    int cnt=0;
    for(int x=0;x<4;x++){
        //asuming all the direction is allowed
        cnt+=findPath(i+di[x],j+dj[x],str,vis,arr);
    }

    vis[i][j]=0;
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str="";
    cin>>m>>n;
    vector<vector<int>>vis(n,vector<int>(m,0));
    vector<vector<int>>arr{{1,0,0,0},
                           {1,1,0,1},
                            {0,1,1,1}, 
                            {0,1,1,1}};
   cout<< findPath(0,0,str,vis,arr);
   
return 0;
}