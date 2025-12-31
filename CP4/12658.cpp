//12658 - Character Recognition?
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    //clock_t z = clock();

    int t;
    cin >> t;
    cin.ignore();
    
    //concise
    unordered_map<string, char> mp = {
    {".*..*..*..*..*.", '1'},
    {"***..*****..***", '2'},
    {"***..****..****", '3'}
};

    vector<string> rows(5);
    for (int i = 0; i < 5; i++) getline(cin, rows[i]);

    for (int d = 0; d < t; d++) {
        string temp = "";
        for (int r = 0; r < 5; r++)
            temp += rows[r].substr(d*4, 3);

        cout << mp[temp];
    }

//My initial Approach
    // string one=".*..*..*..*..*.";
    // string two="***..*****..***";
    // string three="***..****..****";
    // string str="";
    // for(int i=0;i<5;i++){
    //   string temp="";
    //   getline(cin,temp);
    //   str+=temp;
    // }
    
    // for(int i=0;i<4*t;i+=4){
     
    //   string temp="";
    //   for(int k=0;k<5;k++){
    //     for(int j=0;j<3;j++){
    //       temp+=str[i+((4*t)*k)+j];
    //     }
    //   }
    //   if(temp==one){
    //     cout<<"1";
    //   }else if(temp==two){
    //     cout<<"2";
    //   }else{
    //     cout<<"3";
    //   }
      
    // }
    // cout<<"\n";
  

    return 0;
}