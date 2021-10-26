#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void insertionSort(vector<int>&arr,int n)
    { 
        int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main(){
    vector<int>arr={5,4,3,2,1};
    int n=arr.size();
    insertionSort(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }
}