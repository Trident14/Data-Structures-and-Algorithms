#include <iostream>
using namespace std;

//Time and space complexity O(nlogn) || o(n) depending on situation
bool isNonZero(int x) {
    return x != 0;
}

void stablePartition(int arr[],int n,bool (*p)(int)) {
    
    vector<int>first,last;
    
    for(int i=0;i<n;i++){
        if(p(arr[i])){
            first.push_back(arr[i]);
            
        }else{
            last.push_back(arr[i]);
        }
    }
    
     int index = 0;
    for (int value : first) {
        arr[index++] = value;
    }
    for (int value : last) {
        arr[index++] = value;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
        
        stablePartition(arr,n,isNonZero);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}