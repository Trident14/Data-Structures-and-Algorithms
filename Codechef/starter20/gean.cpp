#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char p1,p2;
    cin>>p1>>p2;
    if(p1=='R' or p2=='R'){
        cout<<'R';
    }else{
        if(p1=='B' or p2=='B'){
            cout<<'B';
        }else{
            cout<<'G';
        }
    }
return 0;
}