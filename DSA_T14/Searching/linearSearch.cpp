#include<iostream>
using namespace std;
int linear_Search(int *arr,int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,5,4};
	int key;
	cin>>key;
	int n=sizeof(arr)/sizeof(int);
	int index=linear_Search(arr,n,key);
	if(index==-1){
		cout<<"Element not found";
	}else{
		cout<<"Element found at :"<<index;
	}
}