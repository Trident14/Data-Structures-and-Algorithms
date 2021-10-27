//https://codeforces.com/problemset/problem/281/A
#include<iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif */
    string str;
    cin>>str;
    char first=str[0];
    if(str[0]==tolower(first)){
        str[0]=toupper(first);
    }
    cout<<str;

return 0;
}