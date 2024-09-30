#include<iostream>
#include<vector>
using namespace std;

class heap{
public:
    int *arr;
    int n;
    int cap;
    
    heap(int size){
        arr=new int[size+1];
        cap=size;
        n=0;
    }
    
    void swim(int k){
        
        while(k>1 && arr[k/2]>arr[k]){
            swap(arr[k],arr[k/2]);
            k=k/2;
        }
    }
    
    void sink(int k){
        while(2*k<=n){
            int j=2*k;
            
            if(j<n && arr[j]<arr[j+1]) j++;
            if(arr[k]<=arr[j]) break;
            swap(arr[k],arr[j]);
            k=j;
        }
    }
    
    int delMax(){
        
        int maxi=arr[1];
        swap(arr[1],arr[n]);
         n--;
        sink(1);
       
        return maxi;
        
    }
    
   
    
    void insert(int val){
        if(n>=cap) cout<<"OverFlow";
        arr[++n]=val;
        swim(n);
    }
    
    bool isEmpty(){
        return n==0;
    }
    int top(){
        return arr[1];
    }
    
};

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
        heap pq(10);
        pq.insert(1);
        pq.insert(10);
        pq.insert(5);
        pq.insert(3);
        
        while(!pq.isEmpty()){
            cout<<pq.delMax()<<endl;
        }
}