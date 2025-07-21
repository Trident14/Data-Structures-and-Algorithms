//11547
#include <iostream>
#include <cstdlib>
using namespace std;
void func() {
   int a;
    int n;
    cin>>n;
    a=(((((n*567)/9)+7492)*235)/47)-498;
    a=a/10;
    cout<<abs(a%10)<<"\n";
    
    
 
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
    while (t--) func();

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}