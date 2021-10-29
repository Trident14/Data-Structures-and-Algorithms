/* https://www.codechef.com/problems/N1VALUES
Sample Input 1 
2
3
4
Sample Output 1 
1 2 2 3
1 2 3 3 7
  */
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<1<<" ";
        for(int i=0;i<n;i++){
            //used left shift in place of pow()
            cout<<(1ll<<i)<<" "; 
        }
        cout<<"\n";
    }

return 0;
}