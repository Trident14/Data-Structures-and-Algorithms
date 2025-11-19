//quadrant.cpp
 
#include <iostream>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<"1";
    }else if(x>0 && y<0){
        cout<<"4";
    }else if(x<0 && y<0){
        cout<<"3";
        
    }else{
        cout<<"2";
    }
}