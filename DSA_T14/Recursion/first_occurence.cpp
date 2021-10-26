#include<iostream>
using namespace std;
int first_occurence(int arr[],int n,int key)
{
    if(n==0) return -1;

    if(arr[0]==key) return 0;
    int index=first_occurence(arr+1,n-1,key);
    if(index!=-1) return index+1;
    return -1;
}

int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<first_occurence(arr,n,key);
}