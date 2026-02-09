//https://cses.fi/problemset/task/1644/
#include <iostream>
#include <set>
#include <vector>
#include <climits>

using namespace std;

void func() {
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
        
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, a, b;
    cin >> n >> a >> b;

    vector<long long> pfx(n + 1);
    multiset<long long> mt;
    long long res = LONG_MIN;

    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        pfx[i] = x + pfx[i - 1];
    }
    
    for(int i = a; i <= n; i++){
        mt.insert(pfx[i - a]);

        if(i > b){
            mt.erase(mt.find(pfx[i - b - 1]));
        }

        res = max(res, pfx[i] - *mt.begin());
    }

    cout << res;
    return 0;
}
