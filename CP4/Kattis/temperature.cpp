/*temperature.cpp
The relation between the scales is linear. Since b = x when a = 0, the intercept is x. 
Since 1 degree in a corresponds to y degrees in b, the slope is y. 
Thus the conversion is: b = x + y*a.

Set a = b = T to find when the scales match:
T = x + y*T  =>  (1 - y)*T = x.

If y = 1:
  - If x = 0 → infinitely many solutions → ALL GOOD
  - Else → no solution → IMPOSSIBLE

If y ≠ 1:
  T = x / (1 - y)


*/
 
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    int x,y;
    cin>>x>>y;
    if(y==1){
        if(x==0){
            cout<<"ALL GOOD";
        }else{
            cout<<"IMPOSSIBLE";
        }
    }else{
        double res=x/(double)(1-y);
         cout<<fixed<<setprecision(10)<<res;
    }
}