/*  
https://www.codechef.com/NOV21C/problems/EQUALCOIN

Sample Input 1 
4
2 2
1 3
4 0
1 10
Sample Output 1 
YES
NO
YES
NO

*/

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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=arr[i];
        }
        if(sum==arr[n-1]){
            cout<<0<<"\n";
        }else{
            cout<<1<<"\n";
        }
    }
return 0;
}