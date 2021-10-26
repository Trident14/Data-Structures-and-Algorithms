#include<iostream>
using namespace std;
int thiredLargest(int n,int arr[]){
	if(n<=1) return -1;

	int first=arr[0];
	for(int i=0;i<n;i++){
		first=max(first,arr[i]);
	}
	int second =-1;
	for(int i=0;i<n;i++){
		if(first!=arr[i]){
			second=max(second,arr[i]);
		}
	}
	int third=-1;
	for(int i=0;i<n;i++){
		if(second!=arr[i]&& first!=arr[i]){
			third=max(third,arr[i]);
		}
	}
	return third;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)  cin>>arr[i] ;

	cout<<thiredLargest(n,arr)<<" "<<endl;
	
}
