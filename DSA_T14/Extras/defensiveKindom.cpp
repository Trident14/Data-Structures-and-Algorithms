//defensive kindom 
//https://www.spoj.com/problems/DEFKIN/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int w,h,n;
		cin>>w>>h>>n;
		vector<int>x;
		x.push_back(0);
		vector<int>y;
		y.push_back(0);
		for(int i=0;i<n;i++){
			int first,second;
			cin>>first>>second;
			x.push_back(first);
			y.push_back(second);
		}
			x.push_back(w+1);
			y.push_back(h+1);
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
	int min_x=0;
	int min_y=0;
	for(int i=0;i<x.size()-1;i++){
		min_x=max(min_x,x[i+1]-x[i]-1);
		min_y=max(min_y,y[i+1]-y[i]-1);

	}
	cout<<min_y*min_x<<"\n";
}

}