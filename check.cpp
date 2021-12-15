#include<iostream>
#include<vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
    cin>>t;
    while(t--){
        int maxi=0;
        std::vector<int> v(7);
        for(int i=0;i<7;i++){
            cin>>v[i];
            maxi=max(maxi,v[i]);
        }
        bool flag=0;
        for(int i=0;i<7;i++){
            for(int j=i+1;j<6;j++){
                for(int k=j+1;k<5;k++){
                    if(v[i]+v[j]+v[k]==maxi){
                        cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                        flag=1;
                        break;
                    }
                    if(flag) break;
                }
                if(flag) break;
            }
        }
    }
return 0;
}