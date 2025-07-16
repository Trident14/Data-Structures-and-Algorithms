/*1124 - Celebrity jeopardy*/
#include <iostream>
#include<string>
using namespace std;
void func() {
    string temp;
    string line;
    while (getline(cin, line)) {
        if (line.empty()) break; // optional: stop on empty line

        temp+=line;
        temp+="\n";
    }
    cout<<temp;
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