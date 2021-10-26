#include<iostream>
using namespace std;
int getIth_bit(int n,int i){
    int mask=1<<i;
    return (n&mask)>0?1:0;
}
int main(){
int n;
cin>>n;
int i;
cin>>i;
cout<<getIth_bit(n,i);
}