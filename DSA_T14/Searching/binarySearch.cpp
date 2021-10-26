#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>&arr,int size,int key){
	int left=0;
	int right= size-1;

	while(left<=right){
		int mid=left+(right-left)/2;
		// if element is in mid then return mid
		if(arr[mid]==key) {
			return mid;
		}
		// if element greater then mid 
		else if(arr[mid]>key){
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	return -1;
}
int main(){
	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif
	vector<int>arr={1,2,4,6,8,9,100};
	int key;
	int t;
	cin>>t;
	while(t--){
		cin>>key;
		int index=binarySearch(arr,arr.size(),key);
		if(index==-1){
			cout<<"Element not found"<<"\n";
		}else{
			cout<<"Element found at :"<<index<<"\n";
		}
	}
}