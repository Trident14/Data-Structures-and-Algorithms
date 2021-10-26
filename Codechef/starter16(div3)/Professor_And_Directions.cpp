//https://www.codechef.com/START16C/problems/DIRECTN
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
      
        bool flag=0;
        for(int i=0;i<n;i++){
            if(str[i]=='L' and str[i-1]=='L'){
                flag=1;
            }
            if(str[i]=='R' and str[i-1]=='R'){
                flag=1;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}