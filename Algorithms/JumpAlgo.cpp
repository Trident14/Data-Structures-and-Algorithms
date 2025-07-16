#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//this will work if after a specific idx all the elements are true.
/* i.e. after that idx the crystall breaks */


//for all other case use a linear search j:0->i  if(arr[j]==t) return j.

int solve() {
    std::vector<bool> arr = {false, false, false, false, true, true, true, true, true, true};
    int n = arr.size();

    // Calculate the jump amount as a power of 2.
    int jumpAmt = sqrt(n);
   

    int i = jumpAmt;

    while (i < n) {
        if (arr[i]) {
            return i;
        }
        i += jumpAmt;
    }

    i -= jumpAmt;

    for (int j = 0; j < jumpAmt && i < n; i++, j++) {
        if (arr[i]) {
            return i;
        }
    }

    return -1;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    int result = solve();
    cout<<endl;

    if (result != -1) {
        std::cout << "Crystal ball found the target at index " << result << std::endl;
    } else {
        std::cout << "Crystal ball did not find the target." << std::endl;
    }

    return 0;
}
