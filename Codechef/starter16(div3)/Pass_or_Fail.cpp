https://www.codechef.com/START16C/problems/PASSORFAIL
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        if((x*3)-((n-5)*-1)>=p){
            cout<<"PASS/n";
        }else{
            cout<<"FAIL/n";
        }
    }
    return 0;
}