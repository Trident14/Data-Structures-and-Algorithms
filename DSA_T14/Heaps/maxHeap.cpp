#include<vector>
using namespace std;
class heap{
	vector<int>v;
	void heapify(int i){
		int left=2*i;
		int right=2*i+1;
		int minIdx=i;
		if(left<v.size() and v[left]>v[i]){
			minIdx=left;
		}
		if(right<v.size() and v[right]>v[i]){
			minIdx=right;
		}
		if(minIdx!=i){
			swap(v[i],v[minIdx]);
			heapify(minIdx);
		}
	}
public:
	heap(int default_size=10){
		v.reserve(default_size);
		v.push_back(-1);
	}
	void insert(int data){
		v.push_back(data);

		int ind=v.size()-1;
		int parent=ind/2;
		while(ind>1 and v[ind]>v[parent]){
			swap(v[ind],v[parent]);
			ind=parent;
			parent=parent/2;
		}
	}
	int top(){
		//graphically return the root/head
		return v[1];
	}
	void pop(){
		swap(v[1],v[v.size()-1]);
		v.pop();
		heapify(1);
	}
};