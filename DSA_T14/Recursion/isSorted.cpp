#include<iostream>
#include<vector>
using namespace std;
//tc->o(n) sc->o(n) as it uses callStack
bool isSorted(int arr[],int n){
    if(n==1 or n==0) return true;
    if(arr[0]<arr[1] and isSorted(arr+1,n-1))
        return true;
    
    return false;
}
// the iterative way reduces the space complexity form o(n) ->o(1)
bool isSorted_Iterative(int arr[],int n){
    if(n==1 or n==0) return true;
    
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]) return false;
    }
    return false;
}
// for checking form a index i till n
bool isSorted2(int arr[],int i,int n){
    if(i==n-1) return true;

    if(arr[i]<arr[i+1] and isSorted2(arr,i+1,n)) return true;

    return false;
}
int main(){
 

    int n;
    cin>>n;
   int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];
    if(isSorted(arr,n)) cout<<"YES\n";
    else cout<<"NO\n";

     if(isSorted_Iterative(arr,n)) cout<<"YES\n";
    else cout<<"NO\n";

    if(isSorted2(arr,1,n)) cout<<"YES\n";
    else cout<<"NO\n";
}