/*
peasoup.cpp
rest menu should have both pancakes
and pea soup , if multiple then first 
occuring 
*/
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
        
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string res = "";

    while (n--) {
        int k;
        cin >> k;
        cin.ignore();

        string restName;
        getline(cin, restName);

        int pea = 0;
        int pan = 0;

        while (k--) {
            string dish;
            getline(cin, dish);

            if (dish == "pea soup")
                pea = 1;

            if (dish == "pancakes")
                pan = 1;
        }

        if (pea == 1 && pan == 1 && res.empty()) {
            res = restName;
        }
    }

    if (!res.empty()) {
        cout << res << "\n";
    } else {
        cout << "Anywhere is fine I guess\n";
    }

    return 0;
}
