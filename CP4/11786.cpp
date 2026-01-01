//11786 - Global Raining at Bididibus 
/*
Since each index represents 1 unit of width, the difference of indices gives 
the actual water length.
*/
#include <iostream>
#include<stack>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        stack<int>st;
        int res=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='\\')
            {
                st.push(i);
            }else if(str[i]=='/' && !st.empty()){
                res+= i - st.top();
                st.pop();
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}