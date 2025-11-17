//1124 
#include <iostream>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
  
    string line;
    while (getline(cin, line)) {
        cout << line << '\n';
    }

   

    return 0;
}