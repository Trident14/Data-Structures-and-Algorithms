/*
 Each index has its own list
 0->[1,2,3,4,5]
 1->[1,2,3,4,5]
 2->[1,2,3,4,5]
 3->[1,2,3,4,5]
 4->[1,2,3,4,5]
 
 */
#include <iostream>
#include<list>
using namespace std;

// Declare class graph
class Graph{
    int V;
    // Array of list
    list<int>*l;
    
    public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }
    
    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    
    void print(){
        for(int i=0;i<V;i++)
            for(auto x:l[i]){
                cout<<i<<"->"<<x<<" ";
            }
         cout<<endl;
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(1,2);
    g.print();

    return 0;
}