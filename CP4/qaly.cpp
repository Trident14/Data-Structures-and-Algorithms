//Quality-Adjusted Life-Year
#include <iostream>
#include<iomanip>
using namespace std;


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
    double res=0.0;
    while (t--) {
        double a, b;
        cin>>a>>b;
        res+=(a*b);
        
    }
    cout<<fixed<<setprecision(3)<<res<<"\n";

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}