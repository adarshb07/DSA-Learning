#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}


int main() {

    int arr[5];

    // To Fill array with some value
    // fill(arr,arr+5,20);


    for(int i=0;i<5;i++) {
        // cout << "Enter the value for box index:"<<i<<endl;
        cin >> arr[i];
    }

    printArray(arr,5);

    cout << endl;
    
    return 0;
}