//left rotate in o(n*d)
#include<iostream>
using namespace std;
void leftRotate(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void lrotate(int arr[],int size,int d){
    for(int i=0;i<d;i++){
        leftRotate(arr,size);
    }
}
int main(){
    int d,arr[5];
    int size;
    cin>>size;
    cin>>d;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   lrotate(arr,size,d);

   for(int x:arr){
    cout<<x<<" ";
   }


}

// left rotate in o(n) and o(d extra space)
//left rotate in o(n*d)
#include<iostream>
using namespace std;
void leftRotate(int arr[],int n,int d){
    int temp[d];

    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    for(int i=d;i<=n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
}

int main(){
    int d,arr[5];
    int size;
    cin>>size;
    cin>>d;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   leftRotate(arr,size,d);

   for(int x:arr){
    cout<<x<<" ";
   }


}
// o(n )

//o(n)
#include<iostream>
using namespace std;
void reverse(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
    void leftRotate(int arr[],int n,int d){
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    }
int main(){
    int n,d;
    cin>>n;
    cin>>d;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftRotate(arr,n,d);

    for(int x:arr){
        cout<<x<<"\n";
    }
}
