#include<iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int>&arr,int n){
    for(int i=0;i<n-1;i++){
        int cnt=0;
        int minPos=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minPos]){
                minPos=j;
            }
        }
        if(minPos!=i){
            swap(arr[minPos],arr[i]);
            cnt++;
        }
    }
}
int main(){
    vector<int>arr={3,9,6,1,5,2};
    int n=6;
    selectionSort(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }
}
