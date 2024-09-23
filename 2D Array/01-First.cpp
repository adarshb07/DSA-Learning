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
    

    // Row Wise..
    // for(int i=0; i<rowSize;i++){
    //     for(int j=0; j<colSize;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }



    // Col Wise  for Square Matrix...

    // for(int i=0; i<rowSize; i++ ){
    //     for(int j=0; j<colSize;j++){
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }


    // Diagonal Wise

    // for(int i=0;i<rowSize;i++){
    //     for(int j=0;j<colSize;j++){
    //         if(i == j){
    //             cout<< arr[i][j]<<" ";
    //         }
    //     }
    //     cout << endl;
    // }



    // Colum Generalized

    // for(int i=0;i<colSize;i++){
    //     for(int j=0;j<rowSize;j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }


    //  Other Diagonal..

    for(int i=0;i<rowSize;i++){
        for(int j=0;j<colSize;j++){
            if(rowSize-i-1 == j){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}