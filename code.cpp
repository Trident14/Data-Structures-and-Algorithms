#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x>k){
            cout<<-1<<"\n";
        }else{
            int temp=0;
            for(int i=0;i<n;i++){
                if(temp==x)
                    temp=0;
                cout<<temp<<" ";
                temp++;
            }
            cout<<"\n";
        }
    }
return 0;
}
