//12015 - Google is Feeling Lucky
#include <iostream>
#include<vector>
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
    int x=1;
    while (t--){
      int maxi=0;
      vector<pair<int,string>>arr(10);
      for(int i=0;i<10;i++){
        string str;
        int k;
        cin>>str;
        cin>>k;
        arr[i]={k,str};
        maxi=max(maxi,k);
      }
   
      cout<<"Case #"<<x++<< ":\n";
      for(auto it:arr){
        if(it.first==maxi){
          cout<<it.second<<"\n";
        }
      } 
    }
    

   

    return 0;
}