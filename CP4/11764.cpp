//11764
#include <iostream>
#include <vector>
using namespace std;
void func() {
    int t;
    cin >> t;
    int k=1;
    while (t--) 
    {
        
        int n;
        cin>>n;
        
        vector<int>arr(n);
        int small=0,big=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i>0){
                if(arr[i]>arr[i-1]){
                    big++;
                }else{
                    if(arr[i]!=arr[i-1])small++;
                }
            }
        }
        cout<<"Case "<<k<<": "<<big<<" "<<small<<"\n";
        k++;
    
    }

    
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //clock_t z = clock();

    func();

   // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}