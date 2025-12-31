//11683 - Laser Sculpture
#include <iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
   int h,c;
   while(cin>>h>>c){
     if(h==0 || c==0) break; 
       int res=0;
       int prev=h;
       while(c--){
        int t;
        cin>>t;
        if(prev>=t){
            res+=prev-t;
        }
        prev=t;
         
       }
        cout<<res<<endl;
       
    }
    return 0;
}