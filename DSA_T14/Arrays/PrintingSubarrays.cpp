#include<iostream>
#include<vector>
using namespace std;
void subarraySum(vector<int>arr){
     int n=arr.size();
     int sum=0,ans=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
               sum+=arr[k];
            }
            ans=max(ans,sum);
            sum=0;
        }
        
    }
    cout<<ans;
}
void printSubarray(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<abs(arr[k]);
            }
          
            cout<<" ";
        }
        
    }
}
int main(){

    vector<int>arr;
    int n;
    int ele=0;
    cin>>n;
    for(int i=0;i<n;i++) {cin>>ele; arr.push_back(ele);} 
    printSubarray(arr);
    cout<<endl;
    subarraySum(arr);

}