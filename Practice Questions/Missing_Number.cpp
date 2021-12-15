n//https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1#
/* 
Input:
N = 5
A[] = {1,2,3,5}
Output: 4
*/
#include<iostream>
#include<vector>
using namespace std;

int MissingNumber(vector<int>& array, int n) {
        int orginalSum=orginalSum=(n*(n+1))/2;
        int sum=0;
        for(auto it:array){
            sum+=it;
        }
        return orginalSum-sum;
    }
int main(){
   
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MissingNumber(arr,n);
}