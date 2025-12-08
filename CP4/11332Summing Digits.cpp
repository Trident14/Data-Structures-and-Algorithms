/*
11332 - Summing Digits
// Digital root formula:
// A number and the sum of its digits are congruent modulo 9.
// The digital root cycles every 9 numbers: 1..9 then repeats.
// Using (n - 1) % 9 shifts the cycle so multiples of 9 map to 9 instead of 0.
// Result = 1 + (n - 1) % 9 is the single-digit repeated digit sum.
// A number and its digit-sum give the same result modulo 9.
// This formula returns the digital root: the number reduced to one digit.

*/
#include <iostream>
using namespace std;
// int helper(int n){
//     if(n<10) return n;
//     int sum= n%10 + helper(n/10);
//     if(sum>=10) return helper(sum);
//     return sum;
// }
// int helper(int n) {
//     if (n < 10) return n;
//     int sum = n % 10 + helper(n / 10);
//     return helper(sum);   
// }
//optimized using Digital root mod 9 


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //clock_t z = clock();
    int n;
    while(scanf("%d",&n)){
        if(n==0) break;
        cout<<1+(n-1)%9<<"\n";
    }

   

    return 0;
}