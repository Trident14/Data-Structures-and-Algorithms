#include<iostream>
#include<vector>
using namespace std;
void subset_sum_with_k(int ind,vector<int>&ds,int sum,vector<int>&arr,int n,int k){
    if(ind==n){
        if(ds.size()!=0){
        if(sum%k==0){
        for(auto it:ds){
            cout<<it<<" ";
        }
            cout<<endl;
         // cout<<sum<<" "<<endl;
        }
    }
        return;
    }
    //picking the index
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    subset_sum_with_k(ind+1,ds,sum,arr,n,k);
    //not picking the index
    ds.pop_back();
    sum-=arr[ind];
    subset_sum_with_k(ind+1,ds,sum,arr,n,k);
}
int main(){
   
    int size,k;
    cin>>size>>k;
    vector<int>arr(size);
    vector<int>ds;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    subset_sum_with_k(0,ds,0,arr,size,k);
}