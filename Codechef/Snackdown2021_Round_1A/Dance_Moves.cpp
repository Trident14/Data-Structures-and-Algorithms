//https://www.codechef.com/SNCK1A21/problems/DANCEMOVES
#include<iostream>
using namespace std;
int main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int t;
      cin>>t;
      while(t--){
        int x,y;
        cin>>x>>y;
        int cnt=0;
        while(x!=y){
            if(x<y){
                x+=2;
                cnt++;
            }
            if(x>y){
                x-=1;
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}