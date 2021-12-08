//https://www.codechef.com/problems/CHCBOX
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
      int el = *max_element(arr.begin(), arr.end()); 
        int front_ind=-1;
        int last_ind=-2;
        for(int i=0;i<n;i++){
            if(arr[i]==el){
                front_ind=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==el){
                last_ind=i;
                break;
            }
        }
        if(n/2>=(last_ind-front_ind)){
            cout<<((n/2)-(last_ind-front_ind))<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
return 0;
}