//11078
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

   
   int n,t;
   cin>>t;
    while(t--){
        cin>>n;
        
        int a;
        cin>>a;
        int maxSoFar=a;
        n--;
        int res=INT_MIN;
        while(n--){
            cin>>a;
            res=max(res,maxSoFar-a);
             maxSoFar=max(maxSoFar,a);
        }
        // vector<int>arr(n);
        // for(int i=0;i<n;i++) cin>>arr[i];
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         res=max(res,arr[i]-arr[j]);
        //     }
        // }
        cout<<res<<"\n";
    }
    return 0;
}