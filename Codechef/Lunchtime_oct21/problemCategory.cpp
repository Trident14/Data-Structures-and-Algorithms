/* https://www.codechef.com/LTIME101C/problems/PROBCAT
Sample Input 1 
3
50
172
201
Sample Output 1 
Easy
Medium
Hard

*/

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
        if(n>=1 and n<100){
            cout<<"Easy\n";
        }else if(n>=100 and n<200){
            cout<<"Medium\n";
        }else if(n>=200 and n<=300){
            cout<<"Hard\n";
        }
    }
return 0;
}
//a