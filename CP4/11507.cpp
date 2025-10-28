/*11507 - Bender B. Rodríguez Problem
--------------------------------------------
BENDER DIRECTION CHANGE REFERENCE
--------------------------------------------
Initial: +x

Rules for updating current direction (dir)
--------------------------------------------

1. If dir == "+x":
    +y → +y
    -y → -y
    +z → +z
    -z → -z

2. If dir == "-x":
    +y → -y
    -y → +y
    +z → -z
    -z → +z

3. If dir == "+y":
    +y → -x
    -y → +x
    ±z / No → unchanged

4. If dir == "-y":
    +y → +x
    -y → -x
    ±z / No → unchanged

5. If dir == "+z":
    +z → -x
    -z → +x
    ±y / No → unchanged

6. If dir == "-z":
    +z → +x
    -z → -x
    ±y / No → unchanged

--------------------------------------------
Short summary:
--------------------------------------------
- Facing +x → follow bend literally
- Facing -x → flip bend sign
- Facing ±y → only y-bends change dir (to ±x)
- Facing ±z → only z-bends change dir (to ±x)
--------------------------------------------
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L;
    while (cin >> L && L != 0) {
        string dir = "+x";  // initial direction
        string bend;

        for (int i = 0; i < L - 1; i++) {
            cin >> bend;
            if (bend == "No") continue;

            if (dir == "+x") dir = bend;
            else if (dir == "-x") {
                // flip the sign of the bend
                if (bend[0] == '+') dir = "-" + bend.substr(1);
                else dir = "+" + bend.substr(1);
            }
            else if (dir == "+y") {
                if (bend == "+y") dir = "-x";
                else if (bend == "-y") dir = "+x";
            }
            else if (dir == "-y") {
                if (bend == "+y") dir = "+x";
                else if (bend == "-y") dir = "-x";
            }
            else if (dir == "+z") {
                if (bend == "+z") dir = "-x";
                else if (bend == "-z") dir = "+x";
            }
            else if (dir == "-z") {
                if (bend == "+z") dir = "+x";
                else if (bend == "-z") dir = "-x";
            }
        }

        cout << dir << '\n';
    }
    return 0;
}
