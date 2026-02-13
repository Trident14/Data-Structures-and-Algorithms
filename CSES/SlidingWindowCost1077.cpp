//Sliding Window Cost 1077
#include <iostream>
#include <set>
#include <vector>
#include <cstdlib>
#define ll long long int 

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    multiset<long long> left, right; 
    vector<long long> res;
    ll leftSum=0;
    ll rightSum=0;
    
    auto rebalance = [&](){
        while(left.size()>right.size()+1){
            rightSum+=*left.rbegin();
            leftSum-=*left.rbegin();
            right.insert(*left.rbegin());
            left.erase(prev(left.end()));
        }
        while(right.size()>left.size()){
            leftSum+=*right.begin();
            rightSum-=*right.begin();
            left.insert(*right.begin());
            right.erase(right.begin());
        }
    };
   
   for(int i=0;i<k;i++){
    if(left.empty() || arr[i] <= *left.rbegin())
    {
        leftSum+=arr[i];
        left.insert(arr[i]);
     }else{
        right.insert(arr[i]);
        rightSum+=arr[i];
     }
     rebalance();
   }
   
   for(int i=k;i<=n;i++){
        ll median = *left.rbegin();
       res.push_back(
            std::abs((long long)(left.size() * median - leftSum)) +
            std::abs((long long)(rightSum - right.size() * median))
        );

        if(i==n) break;
        if(left.find(arr[i-k])!=left.end()){
            left.erase(left.find(arr[i-k]));
            leftSum-=arr[i-k];
        }else{
            right.erase(right.find(arr[i-k]));
            rightSum-=arr[i-k];
        }
        rebalance();
        
       
    
        
        if(left.empty() || arr[i]<=*left.rbegin()){
            left.insert(arr[i]);
            leftSum += arr[i];

        }else{
            right.insert(arr[i]);
            rightSum+=arr[i];
        }
        rebalance();
        //inset
        
    
   }

    for(long long x : res)
        cout << x << " ";
}

