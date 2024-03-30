//For MinHeap
#include<vector>
using namespace std;
class Heap{
	vector<int>v; //store data
	void heapify(int i){
		int left=2*i;
		int right=2*i+1;

		int minInd=i;
		//all index should not excede its size
		if(left<v.size() and v[left]<v[i] ){
			minInd=left;
		}
		if(right<v.size() and v[right]<v[minInd]){
			minInd=right;
		}

		if(minInd!=i){
			swap(v[i],v[minInd]);
			heapify(minInd);
		}

	}
public:
	Heap(int default_size=10){
		v.reserve(default_size); //this size is reserved in vector
		v.push_back(-1); // for 1 based indexing
	}
	void push(int data){
		//add data to end of the heap
		v.push_back(data);

		int idx=v.size()-1;
		int parent=idx/2;
		//for min heap the child should be > than parent 
		//the log n since after every iteration it goes n/2 ->n/4-> ...->1
		while(idx>1 and v[idx]<v[parent]){
			swap(v[idx],v[parent]);
			idx=parent;
			parent=parent/2;
		}
	}

	//min element
	int top(){
		return v[1];
	}
	//remove min element
	void pop(){
		//1.swap first and last element and pop last element
		int idx=v.size()-1;
		swap(v[1],v[ind]);
		v.pop_back();
		//recursive funciton to fix the tree
		heapify(1);
	}
	bool isEmpty(){
		return v.size()==1;
	}
	 
};