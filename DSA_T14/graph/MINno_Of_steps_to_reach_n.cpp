/*
Q find the min step to ge from start to end using the given array by multiplying the element .

start = 2;
end = 100;

arr={2,5,10};

using bsf solve this question..
....................................
...................................
*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int solve(){
    vector<int>arr={2,5,10};
    int start=2, end=100;
    int vis[end+1];
    vis[start]=1;
    
    queue<pair<int,int>>q;
    q.push(make_pair(start,-1));
    
    while(!q.empty()){
        auto node=q.front().first;
        int steps=q.front().second;
        
        if(node==end) return steps;
        q.pop();
        
        for(int i=0;i<arr.size();i++){
            int dest=node*arr[i];
            if(dest<=end and vis[dest]){
                q.push({dest,steps+1});
                vis[dest]=1;
            }
        }
    }
    return -1;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cout<<solve();

    return 0;
}