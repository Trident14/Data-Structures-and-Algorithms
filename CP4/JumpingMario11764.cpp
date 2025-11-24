//11764 - Jumping Mario
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
    int tk=1;
    while (t--) {
        int n;
        cin>>n;
        int prev=0;
        cin>>prev;
        int high=0,low=0;
        for(int i=1;i<n;i++){
            int a=0;
            cin>>a;
            if(prev>a){
                low++;
            }else if(prev<a){
                high++;
            }
            prev=a;
        }
        cout<<"Case "<<tk++<<": "<<high<<" "<<low<<"\n";
        
    }

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}