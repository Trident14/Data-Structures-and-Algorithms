//https://codeforces.com/contest/1582/problem/A
/*
i/p:
4
1 1 1
2 1 3
5 5 5
1 1 2
o/p:
0
1
0
1


*/
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        cout<<((1*a)+(2*b)+(3*c))%2<<"\n";
    }
    return 0;
}