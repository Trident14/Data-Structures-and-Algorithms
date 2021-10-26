#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int s,int e){
    int pivit=arr[e];
    int i=s-1;
    for(int j=s;j<e;j++){
        if(arr[j]<pivit){
            i++;
            swap(arr[i],arr[j]);
        }
    }
        swap(arr[i+1],arr[e]);
    return i+1;

}
void quick_sort(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);


}
int main(){
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    vector<int>arr={5,3,3,1,4};
    quick_sort(arr,0,arr.size()-1);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}