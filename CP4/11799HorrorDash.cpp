//11799 - Horror Dash
#include <iostream>
#include<climits>
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
    int tk=1;
    while (t--) {
       int n;
       cin>>n;
       int val=0;
       int maxi=INT_MIN;
       for(int i=0;i<n;i++){
        cin>>val;
         maxi=max(maxi,val);
       }
        cout<<"Case "<<tk++<<": "<<maxi<<"\n";
        
    }

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}