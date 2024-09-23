#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90},
    };

    int rowSize = 3;
    int colSize = 3;
    
    int target = 80;

    for(int i = 0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(target == arr[i][j]){
                cout<< "Element Found At: (" << i <<" ," << j << ")" << endl;  
            }
        }
    }

    return 0;
}