#include<iostream>
#include<vector>
using namespace std;
//o(n){calculate prefixsum} +o(n^2) -> o(n^2)
int LargestSubarraySum(vector<int>arr){
     int n=arr.size();
     //prefix sum
     int prefixSum[n]={0};
     prefixSum[0]=arr[0];
     for(int i=1;i<n;i++){
         prefixSum[i]=prefixSum[i-1]+arr[i];
     }
     for(auto it:prefixSum){
         cout<<it<<" ";
     }
     cout<<endl;
     //largest subarray sum 
     int curSum=0,largest_Sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           curSum=i>0? prefixSum[j]-prefixSum[i-1]:prefixSum[j]; // if i>0 then prefix sum will be prefix[j]
            largest_Sum=max(largest_Sum,curSum);
        }
        
    }
    return largest_Sum;
}
int main(){

    vector<int>arr;
    int n;
    int ele=0;
    cin>>n;
    for(int i=0;i<n;i++) {cin>>ele; arr.push_back(ele);} 
    cout<<LargestSubarraySum(arr);

}