#include<iostream>
#include<string>
using namespace std;
void permute(string str,int l,int r){
    if(l==r){
        cout<<str;
        cout<<"\n";
        return;
    }
    for(int i=l;i<=r;i++){
        // Swapping done
        //fix the l'th element t first
        swap(str[l], str[i]); 
 
        // Recursion called
        permute(str, l+1, r);
 
        //backtrack
        swap(str[l], str[i]);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    permute(str,0,str.length()-1);
return 0;
}