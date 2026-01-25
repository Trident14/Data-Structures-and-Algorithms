/*fastfood.cpp
map will not works as ques might have multiple same amt with diff sticker req, 
map dosent allow duplicate key!
*/
#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
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
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<pair<int,vector<int>>>mp;
   
          vector<int>sticker(m+1);
          sticker[0]=INT_MAX;
        while(n--)
        {
          int k;
          cin>>k;
          vector<int>t(k);
          for(int i=0;i<k;i++){
            cin>>t[i];
          }
          int amt=0;
            cin>>amt;
           
        mp.push_back({amt, t});
            
            
        }
        for(int i=1;i<=m;i++){
            cin>>sticker[i];
        }
        int res=0;
        
       
        for(auto &it:mp){
            //cout<<it.first <<"-> ";
            int mini=INT_MAX;
            for(auto x:it.second){
               // cout<<x<< " " ;
                mini=min(mini,sticker[x]);
            }
            res+=mini*it.first;
        }
        
        cout<<res<<"\n";
    }

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}