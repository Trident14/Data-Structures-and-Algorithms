//filip.cpp
#include <iostream>
using namespace std;
int reverseNum(string s){
    int res=0;
    for(int i=s.length()-1;i>=0;i--){
        res=res*10+(s[i]-'0');
    }
    return res;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
   string a,b;
   cin>>a>>b;
   int r1=reverseNum(a);
   int r2=reverseNum(b);
   cout<<(r1>r2?r1:r2)<<"\n";
   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}