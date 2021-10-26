#include<iostream>
#include<vector>
using namespace std;

void countingSort(vector<int>&arr,int n)
    {   //assuming array is positive
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

}

int main(){
    vector<int>arr={4 ,5 ,7 ,1 ,3 ,2 ,6};
    int n=arr.size();
    countingSort(arr,n);
    for(auto it:arr){
        cout<<it<<" ";
    }
}