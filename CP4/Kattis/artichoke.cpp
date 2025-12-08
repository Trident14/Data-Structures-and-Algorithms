// artichoke.cpp  same as BEST Time to sell stock 1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    double p, a, b, c, d;
    long long n;

    cin >> p >> a >> b >> c >> d >> n;

    double max_so_far = p * (sin(a*1 + b) + cos(c*1 + d) + 2);
    double res = 0.0;

    for (long long k = 2; k <= n; k++) {

        double price = p * (sin(a*k + b) + cos(c*k + d) + 2);

        max_so_far=max(max_so_far,price);
        res=max(res,max_so_far-price);
        // double drop = max_so_far - price;

        // // update largest drop
        // if (drop > max_drop)
        //     max_drop = drop;

        // // update max so far (highest previous price)
        // if (price > max_so_far)
        //     max_so_far = price;
    }

    cout << fixed;
    cout.precision(9);
    cout << res << endl;

    return 0;
}
