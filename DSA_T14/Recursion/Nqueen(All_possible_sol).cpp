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

  Tc-> ~ o(n^n)
  isSafe() -> o(n) 
*/
bool isSafe(int row,int col,vector<vector<int>>&mat){
    for(int i=row,j=col;i>=0 and j>=0;i--,j--){
        if(mat[i][j]==1) return false;
    }
    for(int i=row,j=col;i>=0 and j>=0;i,j--){
        if(mat[i][j]==1) return false;
    }
    for(int i=row,j=col;i<n and j>=0;i++,j--){
        if(mat[i][j]==1) return false;
    }
    return true;;
}
bool NQueen(int col,vector<vector<int>>&mat){
    if(col==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    for(int row=0;row<n;row++){
        if(isSafe(row,col,mat)){
            mat[row][col]=1;
            NQueen(col+1,mat);
            mat[row][col]=0;
        }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<vector<int>>mat(n,vector<int>(n,0));
    NQueen(0,mat);

return 0;
}