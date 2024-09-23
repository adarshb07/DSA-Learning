#include <iostream>
#include<vector>
using namespace std;

void input(vector<vector<int>>&arr){
    int rowSize, colSize;
    cout<<"Enter Number Of Rows: ";
    cin>>rowSize;
    cout<<"Enter Number Of coloums: ";
    cin>>colSize;

    for(int i=0; i<rowSize; i++){
        vector<int>temp;
        for(int j=0; j<colSize; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        arr.push_back(temp);
    }
}


void rowSum(vector<vector<int>> &arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int i=0; i<rowSize; i++){    
        int sum = 0;
        for(int j=0; j<colSize; j++){
            sum += arr[i][j];
        }
        cout<<"Row Number "<< i << " is: " << sum<<endl;
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
        cout<<"Col Number "<< i << " is: " << sum<<endl;
    }

}

int main() {
    
    vector<vector<int>>arr;
    input(arr);
    colSum(arr);

    return 0;
}