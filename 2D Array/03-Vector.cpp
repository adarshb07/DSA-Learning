#include <iostream>
#include <vector>
using namespace std;


bool searchingInTwoDArray(vector<vector<int>>arr, int target){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<vector<int>> arr (4, vector<int>(3,20));

    int rowSize = 3;
    int colSize = 3;



    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            cin>>arr[i][j];
        }
    }

    bool elementFound = searchingInTwoDArray(arr,51);
    cout<<elementFound<<endl;


    return 0;
}