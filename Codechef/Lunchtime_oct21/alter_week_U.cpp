/*https://www.codechef.com/LTIME101C/problems/ALTER
Sample Input 1 
4
1 2 1 2
1 2 3 2
4 3 4 6
3 5 9 25
Sample Output 1 
YES
NO 
YES
NO

*/

#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int a,b,p,q;
        cin>>a>>b>>p>>q;
            if (p%a != 0 || q%b != 0) {
                cout<<"NO\n";   
            }
            else if(p/a == q/b or p/a == q/b - 1 or p/a == q/b + 1){
            cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
return 0;
}
