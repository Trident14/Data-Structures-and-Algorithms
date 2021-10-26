/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
input:
5
1 5 4 3 2
output:
5
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
       }
    sort(arr.begin(),arr.end());
    cout<<arr[n-1];
    return 0;
}