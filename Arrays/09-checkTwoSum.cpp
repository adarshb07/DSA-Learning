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

pair<int, int> checkTwoSum(int arr[], int n, int target){
    pair<int, int> ans = make_pair(-1,-1);

    for(int i = 0; i < n; i++){ 
        for(int j = i + 1; j < n; j++){
            if( arr[i] + arr[j] == target){
                ans.first = arr[i];
                ans.second = arr[j];
                break;
            }
        }
    }

    return ans;
    
}


int main() {
    
    int arr[100];
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    cout << "Enter Element in Array:" << endl;    
    inputArray(arr,n);

    pair<int,int> ans = checkTwoSum(arr,n,30);
    cout<< "Pair of Number is "<< ans.first <<" "<<ans.second<<endl;

    
    
    return 0;
}