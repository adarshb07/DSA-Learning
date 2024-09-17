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
    
    int arr[100]={10,20,30,40};
    int n = 4;

    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout << arr[i]<<" "<<arr[j]<<endl;
        }
        cout<<endl;
    }
    
    return 0;
}