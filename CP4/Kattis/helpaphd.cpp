//helpaphd.cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    int t;
    cin>>t;
    int i=1;
    while(t--)
    {
      string str;
      cin>>str;
      if(str=="P=NP") cout<<"skipped\n";
      else{
        int temp=0;
        int res=0;
        int i=0;
        while(i<str.length() && str[i]!='+'){
            temp=temp*10+(str[i]-'0');         
            i++;
        }
        res=temp;
        temp=0;
        i++;
        while(i<str.length()){
            temp=temp*10+(str[i]-'0');
            i++;
        }
        res+=temp;
        cout<<res<<"\n";
      }
      
       
    }
   
}