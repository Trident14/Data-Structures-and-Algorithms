#include <iostream>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //clock_t z = clock();

    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        int cnt=0;
        while (b != c) {
    b = (b + 1) / 2;
    c = (c + 1) / 2;
    cnt++;
}
        cout<<cnt<<endl;
    }

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}