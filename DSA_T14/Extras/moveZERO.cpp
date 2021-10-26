// //o(n^2)
// #include<iostream>
// #include<vector>
// using namespace std;
// void MoveZero(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             for(int j=i+1;j<n;j++){
//                 if(arr[j]!=0){
//                     swap(arr[i],arr[j]);
//                 }
//             }
//         }
//     }
// }
// int main(){
//     int n,inp=0;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     MoveZero(arr,n);

//     for(int x:arr){
//         cout<<x<<" ";
//     }
// }

//o(n)
#include<iostream>
#include<vector>
using namespace std;
void MoveZero(int arr[],int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[cnt]);
            cnt++;
        }
    }
}
int main(){
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    int n,inp=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MoveZero(arr,n);

    for(int x:arr){
        cout<<x<<" ";
    }
}
