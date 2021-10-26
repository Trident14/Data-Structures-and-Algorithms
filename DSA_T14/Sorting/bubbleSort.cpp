#include<iostream>
#include<vector>
using namespace std;
// optimized way it runs in o(n) times if array is sorted;
// normal bullble sort remove bool
void bubbleSort(vector<int>&arr,int n)
	{ 
		bool check= false;
    int i, j; 
    for (i = 0; i < n-1; i++){
    for (j = 0; j < n-i-1; j++) {
        if (arr[j] > arr[j+1]) 
            swap(arr[j], arr[j+1]); 
        	check =true;
        }
        if(check==false){
        	break;
        }
   } 
}
int main(){
	vector<int>arr={5,4,3,2,1};
	int n=arr.size();
	bubbleSort(arr,n);
	for(auto it:arr){
		cout<<it<<" ";
	}
}