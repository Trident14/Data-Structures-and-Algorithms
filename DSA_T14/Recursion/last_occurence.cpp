#include<iostream>
using namespace std;
int last_occurence(int arr[],int n,int key)
{
    if(n==0) return -1;
    int index=last_occurence(arr+1,n-1,key);
    if(index==-1){
        if(arr[0]==key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return index+1;
    }
}

int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<last_occurence(arr,n,key);
}