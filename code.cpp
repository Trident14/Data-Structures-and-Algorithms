#include <iostream>
#include<climits>
using namespace std;
int solve() {
    int n,x;
    cin>>n>>x;
    int res[n];
    for(int i=0;i<n;i++) cin>>res[i];
        
    int maxi=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(res[i]>=0){
            x+=res[i];
            maxi=max(maxi,x);
        }else{
            x+=res[i];
            maxi=max(maxi,x);
        }
    }
    return maxi;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    // clock_t z = clock();

    int t;
    cin >> t;
    while (t--) cout<<solve()<<"\n";

    //cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}