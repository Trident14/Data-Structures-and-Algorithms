//https://www.codechef.com/START16C/problems/HCAGMAM1
#include<iostream>
using namespace std;
int getMaxLength(string arr, int n)
{
    int count = 0; //intitialize count
    int result = 0; //initialize max
 
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i] == '0')
            count = 0;
 
      
        else
        {
            count++;//increase count
            result = max(result, count);
        }
    }
 
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        string str;
        cin>>str;
        int max_conc_worked=getMaxLength(str,str.length());
        int cnt=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='1'){
                cnt++;
            }
        }
        cout<<(cnt*x)+(max_conc_worked*y)<<"\n";
    }
    return 0;
}