/*
vote.cpp
The not winner case need to check if any multiple candidates
has same no of maxi vote.
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){     
        int n;
        cin>>n;
        int res=0;
        int maxi=0;
        int sum=0;
        int  diff=0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>maxi){
                maxi=arr[i];
                res=i+1;
            }
            sum+=arr[i];
        }
        for(auto it:arr){
           if(it==maxi){
            diff++;
           }
        }
        if(diff>1){
            cout<<"no winner"<<"\n";
            
        }
        else if(maxi>sum/2.0){
             cout<<"majority winner "<<res<<"\n";
             
        }
        else if(maxi<= sum/2.0){
            cout<<"minority winner "<<res<<"\n";
            
        }
    }
    
}