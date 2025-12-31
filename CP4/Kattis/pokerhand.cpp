//pokerhand.cpp
#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
//======================================Optimal Approach===========================
string str;
int strength=0;
int freq[128]={0};
while(cin>>str){
    strength=max(strength,++freq[str[0]]);
}
cout<<strength;
  
//======================================Better Approach===========================
//      string line;
//     getline(cin, line);    

//     stringstream ss(line);
//     string temp;
    
//     int freq[128] = {0};
// int res = 0;

// while (ss >> temp) {
//     res = max(res, ++freq[temp[0]]);
// }
// cout<<res;

//======================================Orginal Approach===========================
    // unordered_map<char,int>mp;
    // while(ss>>temp){
    //     mp[temp[0]]++;
    // }
    
    // int res=0;
    
    // for(auto it:mp){
    //     res=max(res,it.second);
       
    // }
   
   // cout<<res;

    return 0;
}