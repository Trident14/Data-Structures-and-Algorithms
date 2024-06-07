#include <iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;


string func()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    if(k==1){
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        
        if(mp.size()>1){
            
            vector<int>temp(arr.begin(),arr.end());
            sort(temp.begin(),temp.end());
            if(temp==arr) return "Yes";
            return "NO";
        }
        return "Yes";
    
    }
    return "Yes";    
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    

    int t;
    cin >> t;
    while (t--) {
        cout<<func()<<"\n";
        
    }

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}