#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int solve(){
	int n,target;
	cin>>n>>target;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int lo=0;
	int hi=n;
	
	do{
		int m=(lo+(hi-lo)/2);
		int v=arr[m];
		if(v==target) return m;
		else if(v<target){
			lo=m+1;
		}else{
			hi=m;
		}
	}while(lo<hi);
	
	return -1;
	
}
int main(){
	
	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif
	    
	 int t;
	 cin>>t;
	 while(t--){
	 	cout<<solve()<<endl;
	 }
	
	 return 0;
}


