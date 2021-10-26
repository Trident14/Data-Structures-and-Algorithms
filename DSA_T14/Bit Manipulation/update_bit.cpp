#include<iostream>
using namespace std;
void clearBit(int &n,int i){
    int mask=~(1<<i);
    n=n &mask;
}
void update(int &n,int i,int v){
    clearBit(n,i);
    int mask=(v<<i);
    n=n | mask;
}
int main(){
    int n=13;
    int i;
    cin>>i;

    update(n,i,1) ;
    cout<<n;
}