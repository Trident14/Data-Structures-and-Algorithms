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
        x=x%2==0?x/2:x/2+1;
        y=y%2==0?y/2:y/2+1;
        cout<<x*y<<endl;
}
return 0;
}