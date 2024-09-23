#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    vector<vector<int>> arr = {
        {10, 20, 30},
        {40, 50, 60},
        {70, -1, 90}
    };

    int mini = INT16_MAX;
    int maxi = INT16_MIN;

    for(int i=0;i<arr.size();i++){
        for(int j=0; j<arr[0].size();j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
            maxi = max(maxi,arr[i][j]);
        }

    }
    cout<< mini<<endl;
    cout<<maxi<<endl;
    
    return 0;
}