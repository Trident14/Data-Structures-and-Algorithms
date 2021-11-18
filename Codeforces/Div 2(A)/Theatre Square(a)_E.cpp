/* https://codeforces.com/problemset/problem/1/A
input:
6 6 4
output:
4  
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int n,m,a;
	cin>>n>>m>>a;
	n=n%a==0?n/a:(n/a)+1;
	m=m%a==0?m/a:(m/a)+1;
	cout<<n*m;
return 0;
}