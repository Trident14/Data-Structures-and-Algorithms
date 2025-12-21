//acm.cpp
#include <iostream>
#include<unordered_map>
using namespace std;
struct triplet{
  bool flag;
  int n;
  int cnt;
};

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    unordered_map<string,triplet> mp;


while(true){
    int n;
    string prob, desc;
    cin >> n >> prob >> desc;
    if(n == -1) break;

    if(mp[prob].flag) continue;
    
    
    mp[prob].n=n;
    if(desc=="right"){
      mp[prob].flag=true;
      
    }else{
      mp[prob].cnt++;
      mp[prob].flag=false;
    }
}

int res=0;
int cnt=0;
for(auto it : mp)
  {
    if(it.second.flag){
      res+=it.second.n + (20*it.second.cnt);
      cnt++;
    }
    
}
cout<<cnt<<" "<<res<<endl;

    return 0;
}