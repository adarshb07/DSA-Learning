#include <iostream>
using namespace std;

void inputArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    cout << "Enter Element in Array:" << endl;
    inputArray(arr, n);

    int shift = 2;

    // Get Shift Actual value if shift is greater than array size
    shift = shift % n;

    int temp[100], index = 0;

    // Step1: Copy elements that we need to shift into temp array
    for (int i = n - shift; i < n; i++) {
        temp[index++] = arr[i];
    }

    // Step2: Shift the remaining elements in the original array
    for (int i = n - 1; i >= shift; i--) {
        arr[i] = arr[i - shift];
    }

    // Step3: Copy back the elements from temp array
    for (int i = 0; i < shift; i++) {
        arr[i] = temp[i];
    }

    printArray(arr, n);

    return 0;
}
