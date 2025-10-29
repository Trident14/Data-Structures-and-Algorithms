/*
12643 - Tennis Rounds
As its a single elimination and new seed is created i.e after each round the player number 
changes like for n round :
12 34 56 78 
 1  2  3 4
   1    2 
      1
      
Re-seeding: For the next round, the players are effectively given new, smaller seed numbers. For example, the winner of the 1 vs. 2 match is in a new bracket position, as is the winner of the 3 vs. 4 match. The formula (player_number + 1) / 2 mathematically re-seeds a player to their new, halved position for the next round. 
Why i == j
In the same bracket: When the simulation reduces the players' seed numbers, a match is scheduled when their seed numbers become identical.
A single value: When the loop terminates with i == j, it means that after repeated halving, both player i and player j have been assigned to the same effective bracket position. This is the round where they will finally meet.
*/
#include <iostream>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
  

    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        int cnt=0;
        while (b != c) {
    b = (b + 1) / 2;
    c = (c + 1) / 2;
    cnt++;
}
        cout<<cnt<<endl;
    }

   

    return 0;
}