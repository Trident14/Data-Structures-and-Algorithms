//11799 
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
void func() {
    int t;
    cin >> t;
     cin.ignore(); 
    int k=1;
    while (t--) 
    {
        string line;
        getline(cin,line);
        stringstream ss(line);
        int x;
        int res=-1e9;
        while(ss>>x){
            res=max(res,x);
        }
        
        cout<<"Case "<<k<<": "<<res<<"\n";
        k++;
    
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