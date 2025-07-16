#include <iostream>
#include<vector>
using namespace std;
//https://codeforces.com/problemset/problem/282/A

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
   // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //clock_t z = clock();
        int n;
    cin>>n;
    int res=0;
    while(n--){
        string temp;
        cin>>temp;
        
        if(temp[0]=='+'){
            ++res;
        }else if(temp[0]=='-'){
            --res;
        }else if(temp[1]=='+'){
            res++;
        }else{
            res--;
        }
    }
    cout<<res<<"\n";
    

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}