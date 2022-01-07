//Devendra and Water Sports
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("inputf.in", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif */
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y>>a>>b>>c;
        if((x-y)>=(a+b+c)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
return 0;
}