#include<iostream>
#include<vector>
using namespace std;
int n,m;
int gridWays(int i,int j){
    if(i>=n or j>=m) return 0;
    if(i==n-1 and j==m-1){
        return 1;
    }
    return gridWays(i+1,j)+gridWays(i,j+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    cout<<gridWays(0,0);

return 0;
}