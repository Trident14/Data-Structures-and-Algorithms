//mia.cpp
#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;
bool isMia(int x, int y) {
    return (x == 2 && y == 1) || (x == 1 && y == 2);
}
int main() {
    #ifndef ONLINE_JUDGE
        freopen("/Users/inesh/Desktop/Trident/Data-Structures-and-Algorithms/input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("/Users/inesh/Desktop/Trident/Data-Structures-and-Algorithms/output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
    
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)){
        if(a==0 && b==0 && c==0 && d==0) break;
        unordered_set<int>st{11,22,33,44,55,66};
        int p1=max(a,b)*10+min(a,b);
        int p2=max(c,d)*10+min(c,d);
        
        bool m1=isMia(a,b);
        bool m2=isMia(c,d);
        string res="Tie.";
        if(m1 && !m2){
            res="Player 1 wins.";
        }else if(m2 && !m1){
            res="Player 2 wins.";
        }
        else  if(st.find(p1)!=st.end() && st.find(p2)==st.end()){
            res="Player 1 wins.";
        }else if(st.find(p1)==st.end() && st.find(p2)!=st.end()){
            res="Player 2 wins.";
        }
        else if (p1>p2 ){
            res="Player 1 wins.";
        }else if(p2>p1){
            res="Player 2 wins.";
        }
        cout<<res<<"\n";
    }

   
    return 0;
}
