//fizzbuzz.cpp
#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    int x,y,n;
    cin>>x>>y>>n;
    for(int i=1;i<=n;i++){
        if(i%x ==0 && i%y==0){
            cout<<"FizzBuzz\n";
        }else if(i%x==0){
            cout<<"Fizz\n";
        }else if(i%y==0){
            cout<<"Buzz\n";
        }else{
            cout<<i<<"\n";
        }
    }
}