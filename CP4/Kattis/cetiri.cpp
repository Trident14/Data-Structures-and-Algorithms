//cetiri.cpp
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
      freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
  #endif
      
   int a,b,c;
   vector<int>arr(3);
   int i=0;
   while(i!=3)
   {
    cin>>arr[i];
    i++;
  }
   sort(arr.begin(),arr.end());
   
   
   if(arr[1]-arr[0]<arr[2]-arr[1]){
    cout<<arr[1]+arr[1]-arr[0];
     
   }else if(arr[1]-arr[0]==arr[2]-arr[1]){
    cout<<arr[2]+arr[1]-arr[0];
   }else{
    cout<<arr[0]+arr[2]-arr[1];
   }
   
    return 0;
}