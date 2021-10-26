#include<iostream>
#include<vector>
using namespace std;
//o(n^3)
int LargestSubarraySum(vector<int>arr){
     int n=arr.size();
     int curSum=0,largest_Sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
               curSum+=arr[k];
            }
            largest_Sum=max(largest_Sum,curSum);
            curSum=0;
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