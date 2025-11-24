//statistics.cpp 
#include <iostream>
#include <climits> 
using namespace std;

//o(n) TC
int main()
{
   
    int t;
    int k=1;
   while (cin >> t) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<t;i++){
            int a;
            cin>>a;
            mini=min(a,mini);
            maxi=max(a,maxi);
        }
    cout<<"Case "<<k<<": "<<mini<<" "<<maxi<< " "<<(maxi-mini)<<"\n";
    k++;
   }
    return 0;
}

/*O (nlogn) sorting TC
int main()
{
  
        
    int t;
    int k=1;
   while (cin >> t) {
        vector<int> arr(t);
        for (int i = 0; i < t; i++) {
            cin >> arr[i];
        }

    sort(arr.begin(),arr.end());
    cout<<"Case "<<k<<": "<<arr[0]<<" "<<arr[arr.size()-1]<< " "<<(arr[arr.size()-1]-arr[0])<<"\n";
    k++;
   }

    return 0;
}
*/