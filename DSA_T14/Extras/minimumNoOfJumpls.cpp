#include<iostream>
#include <vector>
#include<map>
using namespace std;
int  test(vector<int>&arr,int maxEle,int steps,int jump){
    int n=arr.size();
    if(n==1) return 0;
    if(arr[0]==0) return -1;

        for(int i=1;i<n;i++){
            if(arr[i]==0 and i!=n-1) return -1;
            if(i==n-1)  return jump;

            maxEle=max(maxEle,i+arr[i]);
            steps--;

            if(steps==0) {
                jump++;
                if(i>maxEle) return -1;
                steps=maxEle-i;
            }

        }
        return -1;
}

int main(){
    vector<int>arr={4 ,2 ,-3 ,1 ,6};
        int maxEle=arr[0];
        int steps=arr[0];
        int jump=1;

       cout<<test(arr,maxEle,steps,jump);
}