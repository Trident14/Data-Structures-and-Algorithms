#include<iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int>&arr,int n){
      /* ->BUBBLE SORT
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    ->selection sort :

    for(int i=0;i<n-1;i++){
        int mindex=i;
        int j;
        for( j=i+1;j<n;j++){
            if(arr[j]<arr[mindex]){
                mindex=j;
            }

        }
        if(mindex!=i){
        swap(arr[mindex],arr[i]);
        }
    }

    ->insertion sort  
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int pos=i-1;
        while(pos>=0 and arr[pos]>curr){
            arr[pos+1]=arr[pos];
            pos=pos-1;
        }
        arr[pos+1]=curr;
    }
    

    ->count sort
    int largest=-1;
    for(int i=0;i<n;i++){
        largest=max(largest,arr[i]);
    }
    vector<int>freq(largest+1,0);
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int j=0;
    for(int i=0;i<largest+1;i++){
        while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    } 
    // merge sort
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

}
*/
}
int main(){
    vector<int>arr={2,4,1,3,5};
    int n=5;
    selectionSort(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }
}
