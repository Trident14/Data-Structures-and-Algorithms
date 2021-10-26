//https://www.codechef.com/SNCK1A21/problems/MINLCM1
#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
       long long int x,y;
       cin>>x>>y;
       long long int minLcm=0,maxLcm=0;
       minLcm=(x* (2*x)/ __gcd(x,(2*x)));
       x=x*y;
       y=x-1;
       maxLcm=(x* y/ __gcd(x,y));
       cout<<minLcm<<" "<<maxLcm<<"\n";
    }
 return 0;
}