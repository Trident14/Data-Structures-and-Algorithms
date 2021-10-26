//Sieve of Eratosthenes  o(n log log n)
#include<iostream>
#include<vector>
using namespace std;
vector<int>prime;
/* vector<bool>p(1e7,true);
vector<int>primes;
void seive(int n){
    for(int i=2;i*i<=n;i++){
        if(p[i]){
            for(int j=i*i;j<=n;j+=i){
              p[j]=false;
            }
        }
    }
    for(int i=3;i<=10000000;i++){
        if(p[i])primes.push_back(i);
    }
   
}*/
void seive(vector<bool>&arr,int n){
    for(int i=2;i*i<=n;i++){
        if(arr[i]){
            for(int j=i*i;j<=n;j+=i){
                arr[j]=false;
            }
        }
    }
    arr[2]=true;
    arr[0]=arr[1]=false;
    for(int i=2;i<n;i++){
        if(arr[i]){
        prime.push_back(i);
        }
    }
}
int main(){
    int n=100;
    vector<bool>arr(n+1,true);
    
    seive(arr,n);
    for(auto it :prime){
        cout<<it<<" ";
    }
}
