#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int test_case(int arr[],int n,int brr[]){
    int ans=INT_MAX;
    int maxi=*max_element(brr, brr+n-1);
     for(int i=0;i<n;i++){
        if(maxi>arr[i] ){
            ans=min(ans,maxi-arr[i]);
        }else if(maxi<arr[i]){
            ans=min(ans,arr[i]-maxi);
        }else {
            i++;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int brr[n-1];
        for(int i=0;i<n;i++){
           cin>>arr[i];
        }
         for(int i=0;i<n-1;i++){
            cin>>brr[i];
        }
        cout<<test_case(arr,n,brr)<<"\n";

    }
}