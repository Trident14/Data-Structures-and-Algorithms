/* https://leetcode.com/problems/merge-intervals/  */

#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>intervals={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>>mergeInterval;
    // if(intervals.size()==0){
    //   return mergeInterval;
    // }
    sort(intervals.begin(),intervals.end());
    vector<int>temp=intervals[0]; //assign the first row;

     for(auto it:temp){
      cout<<it<<" ";
     }


    for(auto it:intervals){
     //cout<<it[0]<<" ::::::"<<it[1]<<" ::::"<<it[2]<<endl;
      if(it[0]<=temp[1]){ 
        temp[1]=max(it[1],temp[1]);
      }else{
        mergeInterval.push_back(temp);
        temp=it;
      }
    }
    mergeInterval.push_back(temp);
   // return mergeInterval;


  
}