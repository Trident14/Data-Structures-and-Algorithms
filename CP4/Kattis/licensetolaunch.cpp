//licensetolaunch.cpp
#include<iostream>
#include<climits>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    int n;
    cin>>n;
   
    int mini=INT_MAX;
    int idx=INT_MAX;
    int res=0;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a<mini){
            idx=i;
            mini=a;
        }
        
    }
    cout<<idx<<endl;
    
    
}