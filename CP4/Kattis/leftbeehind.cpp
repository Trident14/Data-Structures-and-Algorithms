/*
leftbeehind.cpp
*/

#include <iostream>
using namespace std;
string func(int a,int b) {
  
    if(a+b==13){
        return "Never speak again.";
    }else if(a==b){
        return "Undecided.";
    }else if(a>b){
        return "To the convention.";
    }else{
        return "Left beehind.";
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
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(a==0 && b==0 ) break;
     cout<<func(a,b)<<"\n";
 }

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}