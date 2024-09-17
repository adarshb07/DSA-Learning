#include <iostream>
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


int linearSearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if (arr[i] == target){
            return i; 
        }
    }
    return -1;
}



int main() {
    
    int arr[100];
    int n, target;
    cout << "Enter Size of Array: ";
    cin >> n;
    cout << "Enter Target Element: ";
    cin >> target;

    inputArray(arr, n);

    int elementIndex = linearSearch(arr, n, target);

    if (elementIndex != -1 ) {
        cout << "Element Found at: " << elementIndex << endl;
    }
    else {
        cout << "Element Not Fount" << endl;
    }
    
    return 0;
}