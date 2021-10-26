#include<iostream>
#include "vector.h"  //for using own headder file
using namespace std;
// class vector{
//     //Data member
//     int *arr;
//     int cs;
//     int ms;
//     public:
//     vector(int max_size=1){
//         cs=0;
//         ms=max_size;
//         arr=new int[ms];
//     }
//     void push_back(int d){
//         if(cs==ms){
//             //creat new array and delete old one
//             int *oldArr=arr;
//             ms=2*ms;
//             arr=new int[ms];

//             for(int i=0;i<cs;i++){
//                 arr[i]=oldArr[i];
//             }
//             // delete;
//             delete [] oldArr;
//         }
//         arr[cs]=d;
//         cs++; 
//     }

//     void pop_back(){
//         if(cs>=0){
//         cs--;
//         }
//     }
//     bool isEmpty(){
//         return cs==0;
//     }

//     //Front, back,end
//     int front() const{
//         return arr[0];
//     }

//     int back()const{
//         return cs-1;
//     }
//     int at(int i)const{
//         return arr[i];
//     }
//     int operator [](const int i){  //operator overloading
//         return arr[i];
//     }
//     int size() const{
//         return cs;
//     }
//     int capacity(){
//         return ms;
//     }
//     //const which does not modifiy any datay menmber
// };
int main(){
    vector <int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<v.size(); //5
    cout<<endl;
    cout<<v.capacity(); //8

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}