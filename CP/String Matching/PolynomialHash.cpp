#include <iostream>
using namespace std;
//#define long long int long long int
long long int mod=1e9+7;
long long int p=31;

long long int powr(long long int a ,long long int b){
    long long int res=1;
    while(b){
        if(b&1) res*=a;
        a=a*a;
        b/=2;
        
        a%=mod;
        res%=mod;
    }
    return res;
}

long long int inv(long long int a){
    return powr(a,mod-2);
}

long long int poly_hash(string s){
    long long int n=s.length();
    long long int hash=0;
    long long int p_power=1;
    for(long long int i=0;i<n;i++){
        hash+=(s[i]-'a'+1)*p_power;
        p_power=(p_power*p)%mod;
        hash%=mod;
    }
    return hash;
}
bool rabin(string text,string pattern){ 
     long long int n=text.size();
    long long int m=pattern.size(); 
    
    long long int pattern_hash=poly_hash(pattern);
    long long int text_hash=poly_hash(text.substr(0,m));
   
        if(text_hash==pattern_hash) return true;
    
        for(long long int i=1;i+m<=n;i++){
             text_hash = (text_hash - (text[i - 1] - 'a' + 1) + mod) % mod;
                
          //  text_hash=(text_hash - (text[i-1]-'a'+1)*powr(p, m-1) + mod) % mod;
            text_hash = (text_hash * inv(p)) % mod;
             text_hash = (text_hash + (long) (text[i + m - 1] - 'a' +1) * powr(p, m - 1)) % mod;
            
            if(text_hash == pattern_hash)return true;
        }
   return false;
    
}
int  main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    string text,pattern;
    cin>>text;
    cin>>pattern;
     
      long long int n=text.size();
    long long int m=pattern.size(); 
    long long int cnt=0;
    
    if(n<m) {
        cnt++;
        text+=text;
        cnt++;
    }
   
    if()
    bool flag=false;
    while(1){
        if(rabin(text,pattern)) break;
       
        if(text.size()>10000) {
            flag=true;
            break;
        }
        text+=text;
         cnt++;
        
    }
    cout<<cnt<<endl;
    cnt=flag==true?-1:text.size()/n;
    cout<<cnt;
    return 0;
}
