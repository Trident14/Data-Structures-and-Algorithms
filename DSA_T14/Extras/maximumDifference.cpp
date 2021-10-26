// o(n^2) 
#include<iostream>
using namespace std;
int maxDiff(int arr[],int n){
    int max_Sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                max_Sum=max(max_Sum,(arr[j]-arr[i]));
            }
        }
    }
    return max_Sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxDiff(arr,n);
}

// o(n) 
#include<iostream>
using namespace std;
int maxDiff(int arr[],int n){
    int res=arr[1]-arr[0];
    int min_Val=arr[0];
    for(int i=0;i<n;i++){
      res=max(res,(arr[i]-min_Val));
      min_Val=min(min_Val,arr[i]);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxDiff(arr,n);
}
