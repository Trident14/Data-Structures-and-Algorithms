//Sliding Win median 1076
#include <iostream>
#include <set>
#include <vector>
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

    multiset<long long> left, right; // left = smaller half, right = larger half
    vector<long long> res;

    auto rebalance = [&]() {
        while(left.size() > right.size() + 1) {
            right.insert(*left.rbegin());
            left.erase(prev(left.end()));
        }
        while(right.size() > left.size()) {
            left.insert(*right.begin());
            right.erase(right.begin());
        }
    };

    
    for(int i = 0; i < k; i++) {
        if(left.empty() || arr[i] <= *left.rbegin())
            left.insert(arr[i]);
        else
            right.insert(arr[i]);
        rebalance();
    }

    for(int i = k; i <= n; i++) {

        // long long median;
        // if(k % 2 == 1) {
        //     median = *left.rbegin();
        // } else {
        //     median = (*left.rbegin() + *right.begin()) / 2;
        // }
    long long median = *left.rbegin();

        res.push_back(median);

       if(left.find(arr[i - k]) != left.end())
            left.erase(left.find(arr[i - k]));
        else
            right.erase(right.find(arr[i - k]));
        rebalance(); 
       
     

          if(i==n) break;
        if(left.empty() || arr[i] <= *left.rbegin())
            left.insert(arr[i]);
        else
            right.insert(arr[i]);

        rebalance();
          
    }

    for(long long x : res)
        cout << x << " ";
}

