#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isPal(string str){
   for(int i=0;i<str.length()/2;i++){
        if(str[i]!=str[str.length()-i-1]){
            return false;
        }
   }
   return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        if(k==0) cout<<1<<"\n";
        else if(isPal(str)){
            cout<<1<<"\n";
        }else{
            cout<<2<<"\n";
        }
    }
return 0;                                                                                                                                                                                                                                                                                                                                           
}
