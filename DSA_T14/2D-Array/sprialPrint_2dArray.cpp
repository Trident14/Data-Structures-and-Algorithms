#include<iostream>
using namespace std;
void print(int arr[][10],int n,int m){
	int startCol=0;
	int startRow=0;
	int endCol=m-1;
	int endRow=n-1;
	while(startCol<=endCol and startRow<=endRow){
		for(int col=startRow;col<=endRow;col++){
			cout<<arr[startRow][col]<<" ";
		}
		for(int  row=startRow+1;row<=endRow;row++){
			cout<<arr[row][endCol]<<" ";
		}
		for(int col=endCol-1;col>=startCol;col--){
			if(startRow==endRow) break;
			cout<<arr[endCol][col]<<" ";
		}
		for(int row=endRow-1;row>=startRow;row--){
			if(startCol==endCol) break;
			cout<<arr[row][startCol]<<" ";

		}
		startCol++;
		startRow++;
		endCol--;
		endRow--;

	}
}


int main(){
	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif
	int arr[][10]={
		{1,2,3,4},
		{12,13,14,5},
		{11,16,15,16},
		{10,9,8,7}};

		int n=4;
		int m=4;
		print(arr,n,m);
}