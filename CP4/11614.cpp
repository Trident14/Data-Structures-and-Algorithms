/*
11614 - Etruscan Warriors Never Play Chess:

- Row i has i soldiers.
- Total in r rows = r*(r+1)/2 (1+2+3+4 .... r)
- Max rows r for N soldiers: r*(r+1)/2 <= N
- Solve quadratic r^2 + r - 2N = 0:
      r = floor((-1 + sqrt(1 + 8*N)) / 2)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while (t--) {
      long long int n;
      scanf("%lld",&n);
        long long int res = (long long int)floor(floor((sqrt(1+(8*n))-1)/2));
       cout<<res<<endl;
    }

    return 0;
}
