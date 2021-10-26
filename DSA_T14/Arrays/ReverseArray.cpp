#include<iostream>
#include<vector>
using namespace std;
int reverseArray(vector<int>&arr,int size){
    int left=0;
    int right= size-1;

    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int key;
       reverseArray(arr,arr.size());

    for(auto it:arr){
        cout<<it<<" "; 
    }
}