#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    // for(int i=0;i<nums.size();i++){
    //     nums[i]=nums[i]-1;
    // }
    // int maxEle=-1;
    // for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         maxEle=max(maxEle,nums[i]*nums[j]);
    //     }
    // }
    // return maxEle;
     priority_queue<int> q;
        for(int i=0; i<nums.size(); i++){
            q.push((nums[i]-1));
        }
        
        int p=q.top();
        q.pop();
        return p*q.top();
}
int main(){
	std::vector<int> v={3,4,5,2};
    cout<<maxProduct(v)<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
return 0;
}