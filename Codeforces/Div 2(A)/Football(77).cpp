//https://codeforces.com/problemset/problem/96/A
//if count of consecutive repetation is greater than 7 then yes else no
/*input:
001001
output:
NO
input:
1000000001
output:
YES  */
#include<iostream>
using namespace std;
int maxRep(string str){
    int count=0;
    int curCount=1;
    for(int i=0;i<str.length();i++){
       if(i<str.length()-1 and str[i]==str[i+1]){
            curCount++;
       }else{
            if(curCount>count){
                count=curCount;
            }
             curCount=1;
        }
    }
    return count;
}
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
    if(maxRep(str)>=7){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
return 0;
}