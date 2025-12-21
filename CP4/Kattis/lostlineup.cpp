//lostlineup.cpp
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
  int n;
  cin>>n;
  vector<int>arr(n-1);
 
  for(int i=0;i<n-1;i++){
    int a;
    cin>>a;
    arr[a]=i+2;
  }
  cout<<"1"<<" ";
  for(auto it:arr)cout<<it<<" ";
    return 0;
}