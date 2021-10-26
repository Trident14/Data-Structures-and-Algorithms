#include<iostream>
#include<vector>
using namespace std;
int count_subset_sum_by_k(int ind , std::vector<int>&ds,vector<int>&arr,int n,int k,int sum){
    if(ind==n){
        if(ds.size()!=0){
            if(sum%k==0){
                return 1;
            }
        }
        return 0;
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    int l=count_subset_sum_by_k(ind+1,ds,arr,n,k,sum);
    ds.pop_back();
    sum-=arr[ind];
    int r=count_subset_sum_by_k(ind+1,ds,arr,n,k,sum);
    return r+l;
}
int main(){

    int n;  
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    vector<int>ds;
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<count_subset_sum_by_k(0,ds,arr,n,k,0);

}

