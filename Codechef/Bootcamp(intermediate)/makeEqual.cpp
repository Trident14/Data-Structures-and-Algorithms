//https://www.codechef.com/problems/MAKEEQUALhttps://www.codechef.com/problems/MAKEEQUAL
#include<iostream>
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
        int minEle=arr[0];
        int maxEle=arr[0];
        for(auto it:arr){
            minEle=min(minEle,it);
            maxEle=max(maxEle,it);
        }
        cout<<maxEle-minEle<<"\n";
    }
return 0;
}