//https://www.codechef.com/SNCK1A21/problems/RRR
#include <iostream>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
       int n,k;
       cin>>n>>k;
       cout<<((n-k)*2)+(((k-1)/2)*2)<<"\n";
       
    }
 return 0;
}