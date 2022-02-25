#include <iostream>
#include<list>
#include<unordered_map>
using namespace std;
class graph{
    unordered_map<string,list<string>>m;
    public:
        void addEdge(string a,string b){
            m[a].push_back(b);
           // m[b].push_back(a);
        }
        
        void print(){
            for(auto it:m){
                cout<<"["<<it.first<<"] ->";
                for(auto x:it.second){
                    cout<<x<<" ";
                }
                cout<<endl;
            }
        }
};

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    graph g;
    g.addEdge("delhi","london");
    g.addEdge("new york","london");
    g.addEdge("delhi","paris");
    g.addEdge("paris","new york");
    g.print();
    return 0;
}