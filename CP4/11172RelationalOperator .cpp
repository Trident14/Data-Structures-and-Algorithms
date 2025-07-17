// 11172 - Relational Operator  
#include <iostream>
using namespace std;
string func() {
 int x,y;
 cin>>x>>y;
 
     if(x>y){
        return ">";
     }
     if(x<y){
        return "<";
     }
     if(x==y){
        return "=";
     }
     return "";
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //clock_t z = clock();

    int t;
    cin >> t;
    while (t--) cout<<func()<<"\n";

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}