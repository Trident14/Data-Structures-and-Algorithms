//battlesimulation.cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    string str;
    cin >> str;

    int i = 0;
    int n = str.length();

    while (i <= n - 3) {
        string sub = str.substr(i, 3);
        sort(sub.begin(), sub.end());

        if (sub == "BLR") {   // covers all permutations of R, B, L
            cout << "C";
            i += 3;
        } else {
            if (str[i] == 'R') cout << "S";
            else if (str[i] == 'B') cout << "K";
            else cout << "H";
            i++;
        }
    }

    // remaining characters
    while (i < n) {
        if (str[i] == 'R') cout << "S";
        else if (str[i] == 'B') cout << "K";
        else cout << "H";
        i++;
    }

    return 0;
}
