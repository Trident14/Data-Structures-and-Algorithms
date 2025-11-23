//11172 - Relational Operator
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
    int a,b;
    cin>>a>>b;
    
    cout << (a == b ? "=" : (a > b ? ">" : "<")) << "\n";

   }
}