#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findsubset(int i,vector<int>& str,vector<int>& ds,int n){
    //base case
    if(i==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
      
        return;
    }
    //rec case
    //include i'th  in subset
    ds.push_back(str[i]);
    findsubset(i+1,str,ds,n);
    // exclude i'th from subset
    ds.pop_back();
    findsubset(i+1,str,ds,n);
}
int main(){
    vector<string>list;
   vector<int> str={1,2,2};
   vector<int>ds;
    
    findsubset(0,str,ds,str.size());
  
   
}