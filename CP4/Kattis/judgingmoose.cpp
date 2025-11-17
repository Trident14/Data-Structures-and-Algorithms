//judgingmoose.cpp
#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    int l,r;
    cin>>l>>r;
    
    if(l==0 && r==0) cout<<"Not a moose\n";
    else if(l!=r){
        cout<<"Odd "<<2*max(l,r);
    }else{
        cout<<"Even "<<l+r;
    }

}
