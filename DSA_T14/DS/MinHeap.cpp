#include <iostream>
#include<vector>
#include <queue>
using namespace std;

//Implementation of MIN Heap

class Heap{
    vector<int>arr;
public:
    Heap(int maxCap=10){
       arr.reserve(maxCap);
       arr.push_back(-1);
       
    }
    
    void heapifyUP(int idx){
        int parent=idx/2;
        if(arr[parent]>arr[idx]){
            swap(arr[parent],arr[idx]);
            heapify(parent);
        }
    }
    void push(int val){
 
        arr.push_back(val);
        
        int idx=arr.size()-1;
        int parent=idx/2;
        heapifyUP(idx);
        
        // while(idx>1 && arr[idx]<arr[parent]){
        //     swap(arr[idx],arr[parent]);
        //     idx=parent;
        //     parent=parent/2;
            
        // }
        
    }
    void pop(){
        arr[1]=arr[arr.size()-1];
        arr.pop_back();
        heapify(1);
    }
    void heapify(int idx){
        int lIdx=2*idx;
        int rIdx=2*idx+1;
        int minIdx=idx;
        int len = arr.size();
        
        if(lIdx<len&& arr[lIdx]<arr[minIdx]){
            minIdx=lIdx;
        }
        if(rIdx<len&& arr[rIdx]<arr[minIdx]){
            minIdx=rIdx;
        }
        
        if(minIdx!=idx){
            swap(arr[minIdx],arr[idx]);
            heapify(minIdx);
        }
    }
    int top(){
        return arr[1];
    }
    bool isEmpty(){
        return arr.size()==1;
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    
    Heap h(8);
      h.push(4);
    h.push(1);
    h.push(2);
    h.push(6);
    h.push(7);
    h.push(3);
    h.push(8);
    h.push(5);
    
    while(!h.isEmpty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    
    
    return 0;
}