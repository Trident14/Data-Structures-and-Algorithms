#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       double x,p;
       cin>>x>>p;
       double ans=(p/(100-x))*100;
        cout<<fixed << setprecision(2)<<ans<<endl;
    return 0;
}