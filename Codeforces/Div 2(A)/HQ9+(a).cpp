/* 
  https://codeforces.com/contest/133/problem/A
  
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	cin>>str;
	if (str.find('H')!= std::string::npos or
		 str.find('Q')!= std::string::npos or
		  str.find('9')!= std::string::npos){

	    cout << "YES\n";
	}
	else{
	    cout << "NO\n";
	}
return 0;
}