
//12157 - Tariff Plan
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for (int k = 1; k <= t; k++) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int mile = 0, juice = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mile += 10 * ((arr[i] / 30) + 1);
            juice += 15 * ((arr[i] / 60) + 1);
        }

        cout << "Case " << k << ": ";

        if (mile < juice)
            cout << "Mile " << mile;
        else if (juice < mile)
            cout << "Juice " << juice;
        else
            cout << "Mile Juice " << mile;

        cout << "\n";
    }

    return 0;
}
