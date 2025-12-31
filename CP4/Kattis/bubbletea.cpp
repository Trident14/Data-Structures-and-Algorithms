//bubbletea.cpp Greedy
#include <iostream>
#include <unordered_map>
#include<vector>
#include<climits>
#include <algorithm>
using namespace std;
void func() {
 
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int t;
    cin>>t;
    vector<int>toping(t);
    for(int i=0;i<t;i++) cin>>toping[i];
    
        int mini=INT_MAX;
        for (int i = 0; i < n; i++) {
            int k; cin >> k;
            while (k--) {
                int a; cin >> a;
                mini=min(mini,arr[i] + toping[a-1]);
            }
        }
        int money; cin >> money;

   

    int cups = 0;
    
        while(money>=mini){
            money-=mini;
            cups++;
        }

    

   cout << max(0, cups - 1);

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}