//10424
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;
int reduceToSingleDigit(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}
void func() {
    vector<string> items;
    string line;

   while (getline(cin, line)) {
    items.push_back(line);
}

    for (size_t i = 0; i < items.size(); i += 2) {
        
        
        int count1 = 0;
        int count2 = 0;
        for (char ch : items[i]) {
            ch = tolower(ch);
            if (ch >= 'a' && ch <= 'z') {
                count1 += (ch - 'a' + 1);
            }
        }
        
       
        if (i + 1 < items.size()) {
         
            
            for (char ch : items[i + 1]) {
                ch = tolower(ch);
                if (ch >= 'a' && ch <= 'z') {
                    count2 += (ch - 'a' + 1);
                }
            }
            
        }
        
        int digit1 = reduceToSingleDigit(count1);
        int digit2 = reduceToSingleDigit(count2);

        double ratio = 0.0;
        if (digit1 == 0 && digit2 == 0) {
            ratio = 0.0;
        } else if (digit1 <= digit2) {
            ratio = (double(digit1) / digit2) * 100.0;
        } else {
            ratio = (double(digit2) / digit1) * 100.0;
        }

       cout << fixed << setprecision(2) << ratio << " %" << "\n";

        
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    func();

    return 0;
}
