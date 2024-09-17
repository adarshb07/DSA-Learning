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
    
    int totalZero = 0;
    int totalOnes = 0;

    for(int i = 0; i < n; i++){
        int currentArray = arr[i];
        if( currentArray == 0){
            totalZero++;
        }
        else{
            totalOnes++;
        }

    }

    cout << "Total Zeros: " << totalZero << endl; 
    cout << "Total Ones " << totalOnes << endl; 

    return 0;
}