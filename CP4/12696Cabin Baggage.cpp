//12696Cabin Baggage
#include <iostream>
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
    int totalAllowed=0;
    while (t--){
        double l,w,d,wt;
        cin>>l>>w>>d>>wt;
        
        if(((l+w+d)<125 || (l<=56 && w<=45 && d<=25) )&& wt<=7){
            totalAllowed++;
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }
        
        
    }
    cout<<totalAllowed<<endl;
   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}