#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr={{1,2,3},{4,5,6},{7,9}};
    vector<vector<int>>temp;
    for(int i=0;i<arr.size();i++){
        for(auto it:arr[i]){
            temp[i].push_back(it);
            
        }

    }
    for(int i=0;i<temp.size();i++){
        for(auto it:temp[i]){
           cout<<it<<" ";
            
        }

    }




}
