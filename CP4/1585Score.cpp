//1585 - Score
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
        
 int t;
 cin>>t;
 while(t--){
    string str;
    cin>>str;
    int res=0;
    int cnt=0;
    for(int i=0;i<str.length();i++)
    {
      if(str[i]=='O'){
        res+=1+cnt;
        cnt++;
      }else{
        cnt=0;
      }
      
    }
    
    cout<<res<<"\n";
 }
 
 
}