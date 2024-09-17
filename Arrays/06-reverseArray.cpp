#include <iostream>
#include <limits>
using namespace std;

void inputArray(int arr[], int n){
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<endl;
}

void printArray(int arr[], int n) {
    for(int i = 0 ; i < n ;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;    
}



int main() {
    
    int arr[100];
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    cout << "Enter Element in Array:" << endl;    
    inputArray(arr,n);

    cout << "Array Before Swap: " << endl;
    printArray(arr,n);

    for (int i = 0; i<n/2; i++){
        swap(arr[i],arr[n-i-1]);
    }

    cout << "Array After Swap: "<< endl;
    printArray(arr,n);
    
    return 0;
}