#include <iostream>
#include <vector>
using namespace std;

void input(vector<vector<int>> &arr){
    int rowSize,colSize;
    cout<<"Enter Row Size: ";
    cin>>rowSize;
    cout<<"Enter Colum Size: ";
    cin>>colSize;

    for(int i=0;i<rowSize;i++){
        vector <int> temp;
        for(int j=0;j<colSize;j++){
            int val;
            cin>>val;
            temp.push_back(val);
        }
        arr.push_back(temp);
    }

}

void rowSum(vector<vector<int>> &arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int i=0;i<rowSize;i++){
        int sum = 0;
        for(int j=0;j<colSize;j++){
            sum += arr[i][j];
        }
        cout<< "Sum Of Row: "<< i <<" is: "<< sum<<endl;
    }
}

void colSum(vector<vector<int>> &arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int i=0;i<colSize;i++){
        int sum = 0;
        for(int j=0;j<rowSize;j++){
            sum += arr[j][i];
        }
        cout<< "Sum Of Col: "<< i <<" is: "<< sum<<endl;
    }
}

void diagonalSum(vector<vector<int>> &arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();

    int sum = 0;
    if(rowSize != colSize){
        return;
    }
    for(int i=0;i<rowSize;i++){
        sum += arr[i][rowSize-i-1];
    }
    cout<< "Total Sum is:" << sum << endl;
}



int main() {
    vector<vector<int>> arr;
    input(arr);
    // rowSum(arr);
    // colSum(arr);
    diagonalSum(arr);


    return 0;
}