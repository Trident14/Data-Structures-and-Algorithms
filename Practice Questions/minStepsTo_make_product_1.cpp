//https://practice.geeksforgeeks.org/problems/minimum-steps-to-make-product-equal-to-one/1/
/* Input:
N = 3
arr[] = {-2, 4, 0}
Output:
5
Explanation:
We can change -2 to -1, 0 to -1 and 4 to 1.
So, a total of 5 steps are required
to update the elements such that
the product of the final array is 1.   */
#include<iostream>
#include<vector>
using namespace std;

int MinStep(vector<int>&arr, int n)
{
    int cnt=0,pos=0,neg=0,zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos++;
            cnt=cnt+(arr[i]-1);
        }else if(arr[i]<0){
            neg++;
            cnt=cnt+(-1-arr[i]);
        }else{
            zero++;
        }
    }
        if(neg%2==0){
            cnt=cnt+zero;
        }else{
            if(zero>0){
                cnt+=zero;
            }else{
                cnt+=2;
            }
        }
    return cnt;
}
int main(){
   
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MinStep(arr,n);
}