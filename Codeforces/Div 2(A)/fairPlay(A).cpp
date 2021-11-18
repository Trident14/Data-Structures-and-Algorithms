//https://codeforces.com/problemset/problem/1535/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		vector<int>arr(4),temp;
		for(int i=0;i<4;i++){
			cin>>arr[i];
		}
		// temp=arr;
		// sort(temp.begin(),temp.end());
		// int max1=max(arr[0],arr[1]);
		// int max2=max(arr[2],arr[3]);
		// if(max1==temp[3] and max2==temp[2] or max1==temp[2] and max2==temp[3]){
		// 	cout<<"YES\n";
		// }else{
		// 	cout<<"NO\n";
		// }
		// better approach
		if(min(arr[1],arr[0])>max(arr[2],arr[3]) or max(arr[1],arr[0])<min(arr[2],arr[3])){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
 	}
return 0;
}