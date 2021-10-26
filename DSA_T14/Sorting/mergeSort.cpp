#include<iostream>
#include <vector>
using namespace std;
void merge(vector<int>&arr,int l,int mid,int r){
    int res[arr.size()];
    int i=l;
    int k=l;
    int j=mid+1;
    while(i<=mid and j<=r){
        if(arr[i]<arr[j]){
            res[k]=arr[i];
            i++;
        }else{
            res[k]=arr[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=r){
            res[k++]=arr[j++];
        }
    }else{
        while(i<=mid){
            res[k++]=arr[i++];
        }
    }

    for(int i=l;i<=r;i++){
        arr[i]=res[i];
    }



}
void mergsort(vector<int>&arr,int n,int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergsort(arr,n,l,mid);
        mergsort(arr,n,mid+1,r);
        merge(arr,l,mid,r);
    }
  
}
/* using vectors
void merge(vector<int>&arr,int s,int l,int mid){
    int i=s;
    vector<int>temp;
    int j=mid+1;
    while(i<=mid and j<=l){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=l){
        temp.push_back(arr[j++]);
    }
    int ind=0;
    for(int i=s;i<=l;i++){
        arr[i]=temp[ind++];
    }
}
void quicksort(vector<int>&arr,int s,int l){
    if(s<l){
        int mid=(s+l)/2;
        quicksort(arr,s,mid);
        quicksort(arr,mid+1,l);
        merge(arr,s,l,mid);
    }
}*/
int main(){
    vector<int>arr={2,4,1,3,5};
    int n=5;
    mergsort(arr,n,0,n-1);
    for(auto it:arr){
        cout<<it<<" ";
    }
}
