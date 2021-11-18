#include<iostream>
#include<vector>
using namespace std;
int n;
// to check wether we can place a queen or not
/*
checking only in 3 direction i.e
  row--,col-- ->upper left diagonal
  row,col--   -> negative x axis
  row++,col-- ->lower left diagonal
  isSafe() -> o(1)
  count the no of possible solution
*/
bool isSafe(int row,int col,vector<vector<int>>&mat,vector<int>&rowHash
    ,vector<int>&firstHash,vector<int>&thirdHash){
    if(rowHash[row]==1 or firstHash[n-1+row-col]==1 or thirdHash[row+col]==1){
        return false;
    }
    return true;
    
}

int NQueen(int col,vector<vector<int>>&mat,vector<int>&rowHash
    ,vector<int>&firstHash,vector<int>&thirdHash){
    if(col==n){
        return 1;
    }
    int ways=0;
    for(int row=0;row<n;row++){
        if(isSafe(row,col,mat,rowHash,firstHash,thirdHash)){
            mat[row][col]=1;
            rowHash[row]=1;
            firstHash[n-1+row-col]=1;
            thirdHash[row+col]=1;
            ways+=NQueen(col+1,mat,rowHash,firstHash,thirdHash);
            mat[row][col]=0;
            rowHash[row]=0;
            firstHash[n-1+(row-col)]=0;
            thirdHash[row+col]=0;
        }
    }
    return ways;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<vector<int>>mat(n,vector<int>(n,0));
    vector<int>rowHash(n,0);
    vector<int>firstHash(2*n-2,0);
    vector<int>thirdHash(2*n-2,0);
    cout<<NQueen(0,mat,rowHash,firstHash,thirdHash);

return 0;
}