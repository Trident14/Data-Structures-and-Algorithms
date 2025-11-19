//provincesandgold.cpp
#include <iostream>
using namespace std;


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
   
    int g,s,c;
    cin>>g>>s>>c;
  

    int total= (3*g )+(2*s )+(1*c );
    string res="";
    if(total>=8){
        res+="Province";
    }else if(total>=5){
        res+="Duchy";
    }else if(total>=2){
        res+="Estate";
    }
    if (res!="")res+=" or ";

    if(total>=6){
        res+="Gold";
    }else if(total>=3){
        res+="Silver";
    }else if(total>=0){
        res+="Copper";
    }
    cout<<res<<"\n";

}

