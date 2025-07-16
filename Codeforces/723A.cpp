#include <iostream>
#include <algorithm>
using namespace std;
//https://codeforces.com/problemset/problem/723/A

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //clock_t z = clock();

     int a,b,c;
    cin>>a>>b>>c;
    
    int arr[3];
    arr[1]=a;
    arr[2]=b;
    arr[0]=c;
    
    sort(arr,arr+3);
    int t=arr[2]-arr[1];
    int y=arr[2]-arr[0];
    
    cout<<(t==y?t+y: max(t,y));
    

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}