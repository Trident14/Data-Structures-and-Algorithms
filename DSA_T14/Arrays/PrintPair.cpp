#include<iostream>
#include<vector>
using namespace std;
void printSubarray(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<" ";
            
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
    vector<int>arr{1,2,3};
    printSubarray(arr);

}