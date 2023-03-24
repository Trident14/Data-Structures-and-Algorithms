#include <iostream>
#include<vector>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //clock_t z = clock();
        string text1="abcde";
        string text2="ace";
        int n=text1.length();
        int m=text2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int j=0;j<=m;j++){
            dp[0][j]=0;
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
      int i=n,j=m;
      int index=dp[n][m];
      string s="";
      for(int i=0;i<index;i++){
        s+="@";
      }
      int len=index-1;
      cout<<s<<endl;
      while(i>0 && j>0){
        if(text1[i-1]==text2[j-1]){
            cout<<text2[j-1]<<endl;
            len--;
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            i=i-1;
        }else{
            j=j-1;
        }
      }
      cout<<s<<endl;
}