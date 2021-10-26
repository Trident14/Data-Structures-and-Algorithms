#include<iostream>
#include<string>
// shortest distance essential course
using namespace std;
int main(){
    char route[1000];
    int x=0;
    int y=0;
    cin.getline(route,1000);

    for(int i=0;route[i]!='\0';i++){
        switch(route[i]){
            case 'n': y++;
                break;

            case 's': y--;
                break;

            case 'e': x++;
                break;

            case 'w': y--;
                break;
        }
        

    }

    if(x>0 and y>0){
        while(x--){
            cout<<"n";
        }
        while(y--){
            cout<<"e";
        }
    }
    else if(x>0 and y<0){
        while(x--){
            cout<<"n";
        }
        while(y<=0){
            cout<<"e";
            y++;
        }
    }
    
   else  if(x<0 and y<0){
        while(x<=0){
            cout<<"n";
            x++;
        }
        while(y<=0){
            cout<<"e";
            y++;
        }
    }
    
   else if(x<0 and y>0){
        while(x<=0){
            cout<<"n";
            x++;
        }
        while(y--){
            cout<<"e";
        }
    }
    

}