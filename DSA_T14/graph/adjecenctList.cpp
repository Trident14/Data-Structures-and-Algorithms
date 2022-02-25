/*  0 ---1
    |    |
    4 ---2
   / \  /
  5   3     

0->[1,2]
1->[0,2]
4->[5,3,0,2]
2->[3,1]
...

  */

#include<iostream>
// stl for doubly linked list
#include<list>
using namespace std;
class Graph{
	//create a ptr to array of list
	//Dynamic memmory alllocation
	//declaration
	list<int>*l;
	int V;
public:
	Graph(int v){
		V=v;
		//cerate a  array of v linked list
		/*we have created a array of size v and each index has its own linked list
			v[0]->[]->[]->[]
			v[1]->[]->[]->[]->[]
			.
			.
		*/
		l=new list<int>[V];
	}
	void addEdge(int i,int j, bool unDir=true){
		l[i].push_back(j);
		if(unDir){
			l[j].push_back(i);
		}

	}

	void printAdjList(){
		for(int i=0;i<V;i++){
			cout<<i<<"-->";
			for(auto node:l[i]){
				cout<<node<<",";
			}
			cout<<endl;
		}
	}
};
int main(){
	Graph g(6);
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(2,1);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.printAdjList();
}