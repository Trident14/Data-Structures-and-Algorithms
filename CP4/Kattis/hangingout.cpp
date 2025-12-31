//hangingout.cpp
#include <iostream>
#include <iomanip>
using namespace std;
void func() {
 
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int l,n;
    cin>>l>>n;
    int cnt=0;
    while(n--){ 
        string str;
        cin>>str;
        int no;
        cin>>no;
       
        
        if(str=="enter" && l>=no){
            l-=no;
        }else if(str=="leave"){
            l+=no;
        }else{
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}