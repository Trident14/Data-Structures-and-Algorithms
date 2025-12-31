//11559 - Event Planning greedy
#include <iostream>
#include <unordered_map>
#include<vector>
#include<climits>
#include <algorithm>
using namespace std;
void func() {
 
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    
    int n,b,h,w;
    //cin>>n>>b>>h>>w;
    while(cin>>n>>b>>h>>w){
    int res=INT_MAX;
    while(h--){
        int k=0;
        int price;
        cin>>price;
        while(k!=w){
            
            int a;
            cin>>a;
            //cout<<a<< " " ;
            if(a>=n){
                res=min(res,price*n);
            }
            k++;
        }
        // cout<<endl;
    }
    if(res<=b){
        cout<<res<<"\n";
    }else{
        cout<<"stay home\n";
    }
}

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}