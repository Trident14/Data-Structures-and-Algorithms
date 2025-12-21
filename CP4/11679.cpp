//11679 - Sub-prime
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
 
 int b,n;
 while(scanf("%d%d",&b,&n)!=EOF){
    if(b==0 && n==0) break;
    vector<int>banks(b);
    for(int i=0;i<b;i++){
      cin>>banks[i];
    }
    
    while(n--){
      int d,c,v;
      cin>>d>>c>>v;
      
      banks[d-1]-=v;
      banks[c-1]+=v;
    }
    bool flag=true;
    for(auto it:banks){
      if(it<0){
        flag=false;
        break;
      }
      if(!flag) break;
    }
    cout<<(flag?"S\n":"N\n");
    
  
 }
 
}