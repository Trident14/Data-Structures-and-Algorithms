/*
  *  
 *** 
*****



  
Pattern 6
*/



#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    

   int n;
   cin>>n;
 
      for(int i=0;i<n;i++){
        //print spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //print stars
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        
        cout<<endl;
    }
   
    return 0;
}