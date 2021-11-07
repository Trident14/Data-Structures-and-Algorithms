/*https://www.codechef.com/NOV21C/problems/CHEAPFUEL
Sample Input 1 
3
1 1 1 1 1
2 1 2 1 2
2 2 1 1 2

Sample Output 1 
SAME PRICE
DIESEL
SAME PRICE

*/
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        a*=k;
        b*=k;
        if(a+x>b+y){
            cout<<"DIESEL\n";
        }else if(a+x<b+y){
            cout<<"PETROL\n";
        }else{
            cout<<"SAME PRICE\n";
        }

    }
return 0;
}