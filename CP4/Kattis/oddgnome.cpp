/* oddgnome.cpp
If NOT following previous
OR

NOT following next

→ then it must be the king*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    int t;
    cin >> t; // number of gnome groups

    while(t--) {
        int n;
        cin >> n; // number of gnomes
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
           
            int i=1;
        while(i<n-1 && arr[i]==arr[i-1]+1 || arr[i]==arr[i+1]-1) {
            
            i++;
        }
    
  
       cout<<i+1<<"\n";
    }

    return 0;
}
