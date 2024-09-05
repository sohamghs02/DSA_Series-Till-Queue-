#include<iostream>
using namespace std;

void printSum(int arr[][4], int i, int j){
    cout<<"Printing Sum--> "<<endl;
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<4; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main() {
  int arr[3][4];
    cout << "Enter the elements " <<  endl;
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cin >> arr[row][col];
        }
    }
    cout << "Printing the array " << endl;
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    printSum(arr , 3 , 4);
}