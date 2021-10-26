#include<iostream>
#include<vector>
using namespace std;
void MoveZero(int arr[],int n){
    
    for(int i=0;i<n;i++){
        bool flag =false;
        int j;
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                flag true;
                break;
            }
        }
        if(flag ==true) cout<<arr[j]
}
int main(){
    int n,inp=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MoveZero(arr,n);

}
///o(n)
#include<iostream>
#include<vector>
using namespace std;
void MoveZero(int arr[],int n){
    int cur_sum=arr[n-1];
    cout<<cur_sum<<endl;
    
    for(int i=0;i<n-2;i++){
        if(cur_sum<arr[i]){
            cur_sum=arr[i];
            cout<<cur_sum<<endl;
        }
     }  
}
int main(){
    int n,inp=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MoveZero(arr,n);

}