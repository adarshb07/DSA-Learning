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

void printExtreme(int arr[], int n){
    int start = 0, end = n - 1;
    while( start<= end){
        if (start < end) {
            cout << arr[start++] << " ";
        }
        cout << arr[end--] << " ";
    }
    cout<< endl;
}

int main() {
    
    int arr[100];
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    cout << "Enter Element in Array:" << endl;
    
    inputArray(arr,n);
    printExtreme(arr, n);
    
    return 0;
}