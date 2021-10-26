#include<iostream>
#include<vector>
using namespace std;
void printing_Subsequence(int ind,vector<int>&ds,vector<int>&arr,int n){
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    //picking the index
    ds.push_back(arr[ind]);
    printing_Subsequence(ind+1,ds,arr,n);
    //not picking the index
    ds.pop_back();
    printing_Subsequence(ind+1,ds,arr,n);
}
int main(){
    int size;
    cin>>size;
    vector<int>arr(size);
    vector<int>ds;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printing_Subsequence(0,ds,arr,size);
}