#include <iostream>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;

class Node{
public:
  string name;
  list<string>nbrs;
  
  Node(string name){
    this->name=name;
  }
    
};

class Graph{
    
    //All nodes
    //Hashmap (string,node*)
    unordered_map<string,Node*>m;
public:
    Graph(vector<string>cities){
        for(auto city: cities){
            m[city]=new Node(city);
        }
    }
    
    void addEdge(string x, string y, bool unDir=false){
        m[x]->nbrs.push_back(y);
        
        if(unDir) m[y]->nbrs.push_back(x);
    }
    void printAdjList(){
        for(auto it:m){
            auto city=it.first;
            Node *node=it.second;
            cout<<city<<"->"
            for(auto nbr:node->nbrs){
                cout<<nbr<<" ";
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
        
    vector<string> cities = {"delhi","london","paris","new york"};
    Graph g(cities);
    g.addEdge("delhi","london");
    g.addEdge("new york","london");
    g.addEdge("delhi","paris");
    g.addEdge("paris","new york");
    
    g.printAdjList();
    return 0;
}