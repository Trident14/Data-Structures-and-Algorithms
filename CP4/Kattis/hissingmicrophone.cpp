//hissingmicrophone.cpp
#include<iostream>
#include<vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    string str;
    cin>>str;
    bool isHiss =false;
    for(int i=0;i<str.length()-1;i++){
      if(str[i]=='s' && str[i+1]=='s'){
        isHiss=true;
      }
    }
    
    cout<<(isHiss?"hiss":"no hiss");

    
    
}
