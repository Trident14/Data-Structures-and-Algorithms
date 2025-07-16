#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largestIdx = i; 
    int leftChildIdx = 2 * i + 1;
    int rightChildIdx = 2 * i + 2;

    if (leftChildIdx < n && arr[leftChildIdx] > arr[largestIdx]) {
        largestIdx = leftChildIdx; 
    }

    if (rightChildIdx < n && arr[rightChildIdx] > arr[largestIdx]) {
        largestIdx = rightChildIdx; 
    }

    if (largestIdx != i) {
        swap(arr[i], arr[largestIdx]);
        heapify(arr, n, largestIdx);
    }
}

void buildHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n) {
    buildHeap(arr, n);
    
    while(n>1){
        swap(arr[0],arr[n-1]);
        n--;
        heapify(arr,n,0);
    }

  
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif
        
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    heapSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
