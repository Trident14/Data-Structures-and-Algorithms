//onechicken.cpp
#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n, q;
    cin >> n >> q;

    if (q > n) {
        int leftover = q - n;
        cout << "Dr. Chaz will have " << leftover 
             << " piece" << (leftover == 1 ? "" : "s") 
             << " of chicken left over!" << "\n";
    } 
    else if (q < n) {
        int need = n - q;
        cout << "Dr. Chaz needs " << need 
             << " more piece" << (need == 1 ? "" : "s") 
             << " of chicken!" << "\n";
    } 
    else {
        cout << "Dr. Chaz will have 0 pieces of chicken left over!" << "\n";
    }

    return 0;
}
