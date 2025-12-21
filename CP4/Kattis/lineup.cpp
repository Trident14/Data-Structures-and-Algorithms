//lineup.cpp
#include<iostream>
#include<vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool inc = true, dec = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) inc = false;
        if (arr[i] < arr[i + 1]) dec = false;
    }

    if (inc) {
        cout << "INCREASING\n";
    } else if (dec) {
        cout << "DECREASING\n";
    } else {
        cout << "NEITHER\n";
    }
}
