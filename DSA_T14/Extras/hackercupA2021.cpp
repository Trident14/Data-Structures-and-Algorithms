#include <iostream>
#include<string>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
bool Same(string s)
{
    return (s.find_first_not_of(s[0]) == string::npos);
}
int getMaxCon(string &str)
{
    int count[256] = {0};
    int len = str.length();
    int max = 0;  
  
    for (int i = 0; i < len ; i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
        }
    }
    return max;
}
int remVowel(string str)
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u',
                           'A', 'E', 'I', 'O', 'U'};
     
    for (int i = 0; i < str.length(); i++)
    {
        if (find(vowels.begin(), vowels.end(),
                      str[i]) != vowels.end())
        {
            str = str.replace(i, 1, "");
            i -= 1;
        }
    }
    return getMaxCon(str);
}

int getMaxVovel(string &str)
{
    int count[256] = {0};
    int len = str.length();
    int max = 0;  
  
    for (int i = 0; i < len; i++) {
        if(str[i]=='A' or  str[i]=='U' or  str[i]=='O' or  str[i]=='I' or  str[i]=='E'){
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
        }
    }
    }
 
   return max;
}
void totalCount(string str, int &vowels,int &consonants){
     for(int i = 0; i<str.size(); ++i)
    {
        if(str[i]=='A' or  str[i]=='U' or  str[i]=='O' or  str[i]=='I' or  str[i]=='E')
        {
            ++vowels;
        }
        else 
        {
            ++consonants;
        }
    }
}
int getmax(string &str)
{
    int count[256] = {0};
    int len = str.length();
    int max = 0;  
    string result;   
 

    for (int i = 0; i < len; i++) {
        count[str[i]]++;
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }
   return max;
}
int test_case(string s){
    char check;
        if(Same(s)) return 0;
       
        int cnt=0;
        if(s.length()==1){
            return 0;
        }
        int maxNo=getmax(s);
        int vov=0;
        int con=0;
        totalCount(s,vov,con);
            int res=0;
            if(con==1){
                  res=0;
                cnt=con;
                cnt+=2*(vov-getMaxVovel(s));
                res=cnt;
                cnt=0;
                cnt=vov;
                cnt+=2*(con-1);
                if(cnt<0){
                    cnt=res;
                }

            }else if(vov==1){
                 res=0;
                cnt=con;
                cnt+=2*(vov-1);
                res=cnt;
                cnt=0;
                cnt=vov;
                cnt+=2*(con-remVowel(s));
                if(cnt<0){
                    cnt=res;
                }
            }else{
             res=0;
                cnt=con;
                cnt+=2*(vov-getMaxVovel(s));
                res=cnt;
                cnt=0;
                cnt=vov;
                cnt+=2*(con-remVowel(s));
                if(cnt<0){
                    cnt=res;
                }
                
            }
               cnt=min(cnt,res);

     return cnt;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int k=1;
    string temp="";
   
    while(t--){

        string s;
        cin>>s;
        cout<<"Case "<<"#"<<k++<<": "<<test_case(s)<<"\n";
      
    }

}