#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
   int x=0;
   while(t--){
    string str;
    cin>>str;
    if(str.find("+") != std::string::npos){
        x+=1;
    }
    if(str.find("-") != std::string::npos){
        x-=1;
    }
}
cout<<x;
return 0;
}
