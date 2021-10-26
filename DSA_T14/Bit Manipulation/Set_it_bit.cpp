#include<iostream>
using namespace std;
void setIth_bit(int & n,int i){
    int mask=1<<i;
    n=(n|mask);
}
int main(){
int n;
cin>>n;
int i;
cin>>i;
setIth_bit(n,i);
cout<<n;
}