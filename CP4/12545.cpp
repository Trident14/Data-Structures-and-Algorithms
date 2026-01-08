/*
12545 - Bits Equalizer  
Count mismatches, swap as many opposing mismatches as possible, 
flip the rest, and make sure you don’t have extra 1s that cannot be fixed.
Key idea:

Count mismatches:

0→1 (a) and 1→0 (b)

?→0 (c) and ?→1 (d)

Use swaps to fix two mismatches at once:

Each swap fixes one 0→1 + one 1→0, so min(a,b) swaps are enough.

Flip remaining mismatches:

After swaps, leftover 0→1 (a) and leftover ? (c+d) must be flipped individually.

Impossible case:

If S has more 1s than T (x>y), then it’s impossible to make them equal, 
because there’s no operation to remove “extra 1s” beyond swaps/allowed flips.
*/
#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    int k = 1;

    while (T--) {
        int cnt = 0;
        string s, t;
        cin >> s >> t;

        int a = 0, b = 0, c = 0, d = 0,x=0,y=0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0' && t[i] == '1') a++;
            else if (s[i] == '1' && t[i] == '0') b++;
            else if (s[i] == '?' && t[i] == '0') c++;
            else if (s[i] == '?' && t[i] == '1') d++;
             if(s[i]=='1') x++;
              if(t[i]=='1') y++;
        }

        
        if(x>y){
            cout << "Case " << k++ << ": "<< "-1" << "\n";
        }else
        cout << "Case " << k++ << ": "<< (a+b)-min(a,b)+c+d << "\n";
    }

    return 0;
}
