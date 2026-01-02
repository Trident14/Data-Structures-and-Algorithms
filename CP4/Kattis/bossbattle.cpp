//bossbattle.cpp  
/*Because the boss can always move into one of the 
    three pillars affected by the last bomb, a bomb cannot 
    eliminate all three at once. Hence we need to eliminate pillars one by one, requiring
    𝑛−2 bombs.
*/
#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //clock_t z = clock();

    int t;
    cin >> t;
   
    cout<<max(1,t-2);

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}