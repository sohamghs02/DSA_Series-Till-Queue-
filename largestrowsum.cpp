#include<iostream>
#include <climits>
using namespace std;

void printSum(int arr[][3], int i, int j){
    cout<<"Printing Sum--> "<<endl;
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int largestrowsum(int arr[][3], int i, int j){
    int maxi = INT_MIN; 
    int rowIndex = -1;      
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            sum = sum + arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"The maximum sum is: "<<maxi<<endl;
    cout<<"Index is at: "<<rowIndex<<endl;    
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
    printSum(arr , 3 , 3);
    largestrowsum(arr , 3 ,3);
}