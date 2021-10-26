#include<iostream>
using namespace std;
int clearIth_bit(int n,int i){
    int mask=~(1<<i);
    return (n&mask);
}
int main(){
int n;
cin>>n;
int i;
cin>>i;
cout<<clearIth_bit(n,i);
}