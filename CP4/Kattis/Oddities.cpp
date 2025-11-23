//Odditiescpp
 
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
   int t;
   cin>>t;
   while(t--){
    int x;
    cin>>x;
    if(x&1){
            cout<<x<<" is Odd\n";
        }else{
            cout<<x<<" is even\n";
        }
   }
}