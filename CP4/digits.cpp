/* 11687 - Digits || digits.cpp
Given any number 
𝑛
n, which can be extremely large (up to one million digits), 
we define a sequence where the first term is 𝑛
n itself, and each subsequent term is the number of 
digits of the previous term. 
This process continues until the sequence reaches 1. 
The task is to determine the total number of steps required for the sequence 
to reach 1, starting from the original number.


*/
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    char input[1000010];

    while (scanf("%s", input) && strcmp(input, "END") != 0) {
        // If the input is "1", the sequence is already stable.
        if (strlen(input) == 1 && input[0] == '1') {
            printf("1\n");
            continue;
        }

      
        int steps = 1;
        int current_length = strlen(input);
        int next_length;     
        while (current_length != 1) {        
            int temp = current_length;
            next_length = 0;
            while (temp > 0) {
                temp /= 10;
                next_length++;
            }
            
         
            current_length = next_length;
            steps++;
        }
    
        printf("%d\n", steps+1);
    }
    return 0;
}
