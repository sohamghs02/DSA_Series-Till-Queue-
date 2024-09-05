#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int i, int j) {
  for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {            
            if( arr[i][j] == target) {
                return 1;
            }            
        }
    }
    return 0;
}

int main() {
  int arr[3][3];
    cout << "Enter the elements " <<  endl;
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cin >> arr[row][col];
        }
    }
    cout << "Printing the array " << endl;
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout <<" Enter the element to search " << endl;
    int target;
    cin >> target;
    if(isPresent(arr, target, 3, 3)) {
        cout <<" Element found " << endl;
    }
    else{
        cout <<" Not Found" << endl;
    }
}