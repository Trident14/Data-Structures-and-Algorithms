#include<iostream>
using namespace std;
int fabinoacci(int n){
    if(n==0 or n==1){
        return n;
    }

    return fabinoacci(n-1)+fabinoacci(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fabinoacci(n);
}