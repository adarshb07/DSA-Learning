#include <iostream>
#include<vector>
using namespace std;

void print(vector<int> &arr){
  for(auto it : arr){
    cout<<it<<" ";
  }
  cout<<endl;
}


int main() {
  vector<int> arr;

  int n;
  cin>>n;
  
  for(int i=0; i<n;i++){
    int val;
    cin>>val;
    arr.push_back(val);               // To add value at the end of the array...
  }

  print(arr);

  arr.pop_back();                      // To Pop Value From the end of the array...

  cout<<"How array looks Like After pop function..."<< endl;

  print(arr);

  cout << "Some other Functions...." << endl;
  cout << "Front Function: " << arr.front() << endl;      //To Get the first Element Of the Vector.. 
  cout << "End Function: " << arr.back() << endl;         // To Get the last Element Of the Vector..
  cout << "Size function: "<< arr.size() << endl;         // To Get the Size of Vector..
  cout << "Capicity function: " << arr.capacity() << endl;  // To Get the Capacity of Vector..

  return 0;
}