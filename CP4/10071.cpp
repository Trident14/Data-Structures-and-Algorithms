//10071 - Back to High School Physics

/* using fromula s=u+1/2(at)^2

since time is twice (a*2t)^2
using u=v-at
find u and v and subsutite in above we get s=2*vt
*/
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
   int v,t;
    while(scanf("%d%d",&v,&t)!=EOF){
      cout<<(2*v*t)<<"\n";
    }

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}