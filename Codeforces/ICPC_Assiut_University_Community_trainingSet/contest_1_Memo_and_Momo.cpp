//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
/*input:
15 7 3
output:
Memo
input:
22 10 2
output:
Both    */
#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       long long int a,b,k;
       cin>>a>>b>>k;
       if(a%k==0 and b%k==0){
        cout<<"Both\n";
       }else if(a%k==0 and b%k!=0){
        cout<<"Memo\n";
       }else if(a%k!=0 and b%k==0){
        cout<<"Momo\n";
       }else if(a%k!=0 and b%k!=0){
        cout<<"No One\n";
       }
    return 0;
}