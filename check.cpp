#include<iostream>
using namespace std;
#define n 9
bool isSafe(int row,int col,int no, int mat[][9]){
	for(int i=0;i<9;i++){
		if(mat[row][i]==no or mat[i][col]==no) return false;
		if(mat[3*(row/3)+i/3][3*(col/3)+i%3]==no) return false;
	}
	return true;
}
bool solveSudoku(int i,int j,int mat[][9]){
	if(i==n){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	if(j==n){
		return solveSudoku(i+1,0,mat);
	}
	if(mat[i][j]!=0){
		return solveSudoku(i,j+1,mat);
	}
	for(int no=1;no<=9;no++){
		if(isSafe(i,j,no,mat)){
			mat[i][j]=no;
			if(solveSudoku(i,j+1,mat)==true) return true;
			mat[i][j]=0;
		}
	}
	return false;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int mat[9][9] ={ { 3, 1, 6, 5, 7, 8, 4, 9, 2 },
         { 5, 2, 9, 1, 3, 4, 7, 6, 8 },
         { 4, 8, 7, 6, 2, 9, 5, 3, 1 },
         { 2, 6, 3, 0, 1, 5, 9, 8, 7 },
         { 9, 7, 4, 8, 6, 0, 1, 2, 5 },
         { 8, 5, 1, 7, 9, 2, 6, 4, 3 },
         { 1, 3, 8, 0, 4, 7, 2, 0, 6 },
         { 6, 9, 2, 3, 5, 1, 8, 7, 4 },
         { 7, 4, 5, 0, 8, 6, 3, 1, 0 } };
        if(!solveSudoku(0,0,mat)){
            cout<<"No solution exists!";
        }
return 0;
}	