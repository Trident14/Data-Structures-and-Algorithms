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
        int n,x,y;
        cin>>n>>x>>y;
        if((x+y)%2!=0){
            cout<<"1\n";
        }else{
            cout<<"0\n";
        }
       
}
return 0;
}