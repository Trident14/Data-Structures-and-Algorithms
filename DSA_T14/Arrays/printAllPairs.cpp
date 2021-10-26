// #include<iostream>
// #include<vector>
// using namespace std;
// void printAllPair(vector<int>&arr,int size){
//    for(int i=0;i<size;i++){
//     int x=arr[i];
//     for(int j=i+1;j<size;j++){
//         int y=arr[j];
//          if(x+y==5){
//             cout<<"["<<x<<","<<y<<"]"<<endl;
//          }
//     }
//    }
// }
// int main(){
//     vector<int>arr={1,2,3,4,5,1,3,2};
//     int key;
//        printAllPair(arr,arr.size());
//    // cout<<"using for each loop: ";
//     // for(auto it:arr){
//     //    for(auto itt:arr){
//     //     cout<<"["<<it<<","<<itt<<"]"<<endl;
//     //    } 
//     // }
// }
#include <iostream>
#include<string>

using namespace std;

// Function to calculate sum of all numbers present
// in a string containing alphanumeric characters
int findSum(string str)
{
   // A temporary string
   string temp = "";

   // holds sum of all numbers present in the string
   int sum = 0;

   // read each character in input string
   for (char ch : str) {
      // if current character is a digit
      if (isdigit(ch))
         temp += ch;

      // if current character is an alphabet
      else {
         // increment sum by number found earlier
         // (if any)
         sum += atoi(temp.c_str());

         // reset temporary string to empty
         temp = "";
      }
   }

   // atoi(temp.c_str()) takes care of trailing
   // numbers
   return sum + atoi(temp.c_str());
}

// Driver code
int main()
{
   // input alphanumeric string
   string str = "HI";

   // Function call
   cout << findSum(str);

   return 0;
}
