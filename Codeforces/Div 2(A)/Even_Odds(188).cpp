/*https://codeforces.com/problemset/problem/318/A

input:
10 3
output:
5
input:
7 7
output:
6
*/
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    if(k<=(n+1)/2){
        cout<<k*2-1<<"\n";
    }else{
        cout<<(k-(n+1)/2)*2<<"\n";
    }
    return 0;
}