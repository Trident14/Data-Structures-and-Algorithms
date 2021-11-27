#include<iostream>
#include<vector>
using namespace std;
#define n 9
void printGrid (int grid[n][n]) 
    {
          for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
    }
//To check if the number is valid for the given position or not
bool isSafe(int row,int col,int no, int mat[][9]){
    for(int i=0;i<9;i++){
        if(mat[row][i]==no or mat[i][col]==no) return false;
        if(mat[3*(row/3)+i/3][3*(col/3)+i%3]==no) return false;
    }
    return true;
}
bool solveSudoku(int mat[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(mat[i][j]==0){
                for(int no=1;no<=9;no++){
                    if(isSafe(i,j,no,mat)){
                        mat[i][j]=no;
                        if(solveSudoku(mat)==true) return true;
                        mat[i][j]=0;
                        }
                    }
                return false;
            }
        }
    }
    return true; 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mat[n][n];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cin>>mat[i][j];
            }
        }
        if(!solveSudoku(mat)){
            cout<<"No solution exists!";
        }else{
            printGrid(mat);
        }
    
return 0;
}   