#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int Partition(vector<int>&arr,int lo,int hi){
    int idx = lo-1;
    int pivot = arr[hi];
    
    for(int i=lo;i<hi;i++){
        if(arr[i]<pivot){
            idx++;
            swap(arr[idx],arr[i]);
        }
    }
    idx++;
    swap(arr[hi],arr[idx]);
    return idx;
}

void qs(vector<int>&arr,int lo,int hi){
    stack<pair<int,int>>st;
    
    st.push({lo,hi});
    while(!st.empty()){
        lo = st.top().first;
        hi = st.top().second;
        st.pop();
        
         int pivotIdx = Partition(arr, lo, hi);

        if (pivotIdx - 1 > lo) {
            st.push({lo, pivotIdx - 1});
        }

        if (pivotIdx + 1 < hi) {
            st.push({pivotIdx + 1, hi});
        }
    }
    
    
    
    //with recursion
    if(lo>=hi) return;
    
    int pivotIdx = Partition(arr,lo,hi);
    
    
    qs(arr,lo,pivotIdx-1);
    qs(arr,pivotIdx,hi);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    vector<int>arr={50,20,10,30,40};
    
    qs(arr,0,arr.size()-1);
    
    for(auto it:arr) cout<<it<<endl;
}
