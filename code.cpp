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