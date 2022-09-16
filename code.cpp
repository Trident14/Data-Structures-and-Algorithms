#include <iostream>
#include<vector>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    
      int a=0;
      int n=5;
      int b=1;
      int c=0;
      for(int i=2;i<=9;i++){
        c=a+b;
        a=b;
        b=c;
      }
     cout<< c;

    return 0;
}