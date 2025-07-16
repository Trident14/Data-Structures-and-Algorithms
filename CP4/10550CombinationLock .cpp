/*1124 - 10550 - Combination Lock*/
#include <iostream>
#include<string>
using namespace std;
void func() {
    int n,a,b,c;
    while(1){
        if (scanf("%d %d %d %d", &n, &a, &b, &c) != 4)
            break;  // Exit on input failure or EOF

        if (n == 0 && a == 0 && b == 0 && c == 0)
            break;  // Exit if all inputs are 0
        
       int total = 720; 
        total += ((n - a + 40) % 40) * 9; 
        total += 360; 
        total += ((b - a + 40) % 40) * 9; 
        total += ((b - c + 40) % 40) * 9; 
        cout << total << '\n';

    }
}



int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //clock_t z = clock();

     func();

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}