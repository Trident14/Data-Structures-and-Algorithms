#include<iostream>
#include<vector>
using namespace std;
void subset_with_k(int ind,vector<int>&arr,vector<int>&ds,int n,int sum,int k) {
    if(ind==n){
        if(sum%k==0){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    subset_with_k(ind+1,arr,ds,n,sum,k);
    ds.pop_back();
    sum-=arr[ind];
    subset_with_k(ind+1,arr,ds,n,sum,k);
    
}

int main(){
    int size,k;
    cin>>size>>k;
    vector<int>arr(size);
    vector<int>ds;
    subset_with_k(0,arr,ds,size,0,k);
}