/*  
https://www.codechef.com/NOV21C/problems/EQUALCOIN

Sample Input 1 
4
2 2
1 3
4 0
1 10
Sample Output 1 
YES
NO
YES
NO

*/

#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int x,y;
        cin>>x>>y;
        if(x==0 and y%2!=0){
            cout<<"NO\n";
        }else if((x+y*2)&1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
return 0;
}