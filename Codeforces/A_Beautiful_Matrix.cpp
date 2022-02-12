#include <bits/stdc++.h>
using namespace std;
void solve() {
    vector<vector<int>>vec(5,vector<int>(5));
    int x=0;
    int y=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>vec[i][j];
            if(vec[i][j]==1){
                x=i; 
                y=j;
            }
        }
    }
    cout<<abs(x-2)+abs(y-2);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    clock_t z = clock();

    int t=1;
    //cin >> t;
    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}