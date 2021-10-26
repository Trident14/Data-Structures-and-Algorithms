#include<iostream>
using namespace std;
int fastPowerFunction(int num,int power){
	if(power==0) return 1;
	int sub=fastPowerFunction(num,power/2);
	int sub_squar=sub*sub;
	//Checking if number is odd, if odd return square else multiply it with base/number;
	if(power&1){
		return num*sub_squar;

	}else{
		return sub_squar;
	}
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

	int t;
	cin>>t;
	int power;
	cin>>power;
	cout<<fastPowerFunction(t,power);

return 0;
}