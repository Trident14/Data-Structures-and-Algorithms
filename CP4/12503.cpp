//12503 
#include <iostream>
#include<vector>
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
      int n;
      cin>>n;
      cin.ignore();
      vector<int>arr(n);
      for(int i=0;i<n;i++){
        string temp;
        getline(cin,temp);
        
        if(temp=="LEFT") arr[i]=-1;
        else if(temp=="RIGHT") arr[i]=1;
        else{
          int k=8;
          int tt=0;         
          while(k<temp.size()){
            tt=(tt*10)+temp[k]-'0';
            k++;
          }
          arr[i]=arr[tt-1];
          
        }
      }
      int res=0;
      
      for(auto it:arr) res+=it;
      cout<<res<<"\n";
    }

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}