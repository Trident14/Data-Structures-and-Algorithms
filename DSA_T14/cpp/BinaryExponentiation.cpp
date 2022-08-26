#include<iostream>
using namespace std;
int pow(int a, int b){
    int res=1;
    while(b){
        //check for last bit if set then multiply a to res
        if(b&1){
            res=res*a;
        }
        a=a*a;   // multiply a with a -> a, a^2,a^3....
        b=b/2;    // right shift b
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt",  "r",  stdin);
        freopen("output.txt", "w", stdout);
    #endif
        
    cout<< pow(2,10);
}
    