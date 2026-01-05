/*
basicprogramming1.cpp
 x = (x % 26 + 26) % 26; safe modulo as we need +ve only
 
 x = (x % m + m) % m;
Why This Works
x % m → may be negative
+ m → shifts it into positive range
% m again → keeps it within [0, m-1]

*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> arr(n);
    long long sum = 0, evenSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] % 2 == 0) evenSum += arr[i];
    }

    switch (t) {
        case 1:
            cout << 7;
            break;

        case 2:
            if (arr[0] > arr[1]) cout << "Bigger";
            else if (arr[0] == arr[1]) cout << "Equal";
            else cout << "Smaller";
            break;

        case 3: {
            vector<int> temp = {arr[0], arr[1], arr[2]};
            sort(temp.begin(), temp.end());
            cout << temp[1];
            break;
        }

        case 4:
            cout << sum;
            break;

        case 5:
            cout << evenSum;
            break;

        case 6:
            for (int x : arr) {
                x = (x % 26 + 26) % 26;
                cout << char('a' + x);
            }
            break;

        
        case 7:
        vector<bool> visited(n, false);
         int current = 0;
         
             while (true) {
                if (current < 0 || current >= n) {
                    cout << "Out" << endl;
                    break;
                }
                if (current == n-1) {
                    cout << "Done" << endl;
                    break;
                }
                if (visited[current]) {
                    cout << "Cyclic" << endl;
                    break;
                }
                visited[current] = true;
                current = arr[current];  
            }
    
        break;
            
    }
}