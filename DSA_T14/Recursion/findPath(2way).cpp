#include<iostream>
#include<string>
using namespace std;
int m,n;
void findPath(int i,int j,string str){
    //one base case to check if we crossed boundary
    if(i>=n or j>=m) return;
    if(i==n-1 and j==m-1){
        cout<<str<<"\n";
        return;
    }
    str+='R';
    findPath(i,j+1,str);
    str.pop_back();

    str+='D';
    findPath(i+1,j,str);
    str.pop_back();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str="";
    cin>>m>>n;
    findPath(0,0,str);
return 0;
}