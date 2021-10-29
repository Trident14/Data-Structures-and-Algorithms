#include<iostream>
#include<vector>
using namespace std;
int count_subset_with_Sum(int ind,vector<int>&arr,int n,int sum){
    int l=0,r=0;
    if(ind==n){
        if(sum==0){
            return 1;
        }else{
            return 0;
        }
    }
    //keep picking if current element is less than sum
    if(arr[ind]<=sum){
        sum-=arr[ind];
        l+=count_subset_with_Sum(ind,arr,n,sum);
        sum+=arr[ind];
    }
    r+=count_subset_with_Sum(ind+1,arr,n,sum);
    return l+r;
}
int main(){

    int n,sum;  
    cin>>n>>sum;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<count_subset_with_Sum(0,arr,n,sum);

}

