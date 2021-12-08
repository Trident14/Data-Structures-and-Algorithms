#include<iostream>
#include<vector>
using namespace std;
void setMatZero(vector<vector<int>>&arr,vector<vector<int>>&temp,int m,int n){
  int i,j;
  for(i=0;i<m;i++){
        for( j=0;j<n;j++){
            if(arr[i][j]==0){
                for(int y=0;y<n;y++){
                    temp[i][y]=0;
                }

                for(int x=0;x<n;x++){
                    temp[x][j]=0;
                } 
            }
        }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>arr={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    vector<vector<int>>temp=arr;

    setMatZero(arr,temp,m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}