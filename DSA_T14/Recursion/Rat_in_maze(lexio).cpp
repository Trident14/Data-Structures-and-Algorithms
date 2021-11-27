#include<iostream>
#include<string>
#include<vector>
using namespace std;
int m,n;
vector<string>ans;
string dir="DLRU";
int di[]={1,0,0,-1};
int dj[]={0,-1,1,0};
void findPath(vector<vector<int>>ans,int i,int j,string str,vector<vector<int>>&vis,vector<vector<int>>&arr){
    //one base case to check if we crossed boundary
    if(i>=n or j>=m or i<0 or j<0 or vis[i][j]==1 or arr[i][j]==0) return ;
    if(i==n-1 and j==m-1){
        for(int k=0;k<=n;k++){
            for(int l=0;l<=m;l++){
                ans[k][l] = arr[k][l];
            }cout<<endl;
        }
        return;
    }
    vis[i][j]=1;

    for(int x=0;x<4;x++){
        str+=dir[x];
        findPath(ans,i+di[x],j+dj[x],str,vis,arr);
        str.pop_back();
    }
    //str+='R';
    // findPath(i,j+1,str,vis);
    // str.pop_back();

    // str+='D';
    // findPath(i+1,j,str,vis);
    // str.pop_back();

    // str+='U';
    // findPath(i-1,j,str,vis);
    // str.pop_back();

    // str+='L';
    // findPath(i,j-1,str,vis);
    // str.pop_back();

    vis[i][j]=0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str="";
    cin>>m>>n;
    vector<vector<int>>vis(n,vector<int>(m,0));
    vector<vector<int>>arr{{1,0,0,0},
                           {1,1,0,1},
                            {0,1,0,0}, 
                            {0,1,1,1}};
    vector<vector<int>>ans=arr;
    findPath(ans,0,0,str,vis,arr);
return 0;
}