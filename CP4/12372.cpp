//12372
#include <iostream>
using namespace std;
void func() {
    int t;
    cin >> t;
    int i=1;
    while (t) {
        int l,w,h;
        string res="";
        cin>>l>>w>>h;
        if(l<=20 && w<=20&& h<=20){
            res="good";
        }else{
            res="bad";
        }
        
        cout<<"Case "<<(i++)<<": "<<res<<"\n";
        t--;
    }
 
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //clock_t z = clock();

     func();

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}