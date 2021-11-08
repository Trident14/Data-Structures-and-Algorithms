#include<iostream>
#include<string>
#include<vector>
using namespace std;
int m,n;
/* 
RDD
RDLDR
DRD
DDR
1->ul
2->lr
3->ll
4->ur
*/
string dir="DRUL1234";
int di[]={1,0,-1,0,-1,1,1,-1};
int dj[]={0,1,0,-1,-1,1,-1,1};
void findPath(int i,int j,string str,vector<vector<int>>&vis){
    //one base case to check if we crossed boundary
    if(i>=n or j>=m or i<0 or j<0 or vis[i][j]==1) return;
    if(i==n-1 and j==m-1){
        cout<<str<<"\n";
        return;
    }
    vis[i][j]=1;

    for(int x=0;x<8;x++){
        str+=dir[x];
        findPath(i+di[x],j+dj[x],str,vis);
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
    findPath(0,0,str,vis);
return 0;
}