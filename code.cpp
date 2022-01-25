#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("inputf.in", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif */
    int t;
    cin>>t;
    while(t--){
        string albet="abcdefghijklmnopqrstuvwxyz";
        int n;
        cin>>n;
       vector<int>res(n);
       double tot=0;
       for(int i=0;i<n;i++) {
            cin>>res[i];
            tot+=res[i];
        }

        sort(res.begin(),res.end());
        int half =res.size()/2;
        //cout<<res[half-1]<<" "<<res[half];
        swap(res[half-1],res[half]);
        double meanL=0;
        double meanR=0;
        for(int i=0;i<half;i++){
            meanL+=res[i];
        }
        meanR=tot-meanL;
        cout<<float((meanL+meanR)/2)<<endl; 
    }
return 0;
}
