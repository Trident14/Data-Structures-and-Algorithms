//https://www.codechef.com/START16C/problems/CHEFMGX
/*
4
2 10
5 12
34 43
57 63


6
5
6
4
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<bool>p(1e7,true);
vector<int>primes;
void seive(int n){
    for(int i=2;i*i<=n;i++){
        if(p[i]){
            for(int j=i*i;j<=n;j+=i){
              p[j]=false;
            }
        }
    }
    for(int i=3;i<=10000000;i++){
        if(p[i])primes.push_back(i);
    }
   
}


int main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      seive(10000000);
      int t;
      cin>>t;
      while(t--){
         int x,y;
        cin>>x>>y;
        int ans=y-x;
        if(x%2==0)
        x++;
        ans-=(upper_bound(primes.begin(),primes.end(),y)-upper_bound(primes.begin(),primes.end(),x));
        cout<<ans<<"\n";
    }
    return 0;
}