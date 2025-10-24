//https://open.kattis.com/problems/moscowdream
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
    int n,a,b,c;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    if(a>=1 && b>=1 && c>=1 && ((a+b+c)>=n) && n>=3){
      printf("YES\n");
    }else{
      printf("NO\n");
    }

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}