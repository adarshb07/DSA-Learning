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
    
    int maxi = arr[0];
    int mini = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }

        if(arr[i] < mini){
            mini = arr[i];
        }

    }

    cout << "Maximum number in array: " << maxi << endl; 
    cout << "Minimum number in array: " << mini << endl; 

    return 0;
}