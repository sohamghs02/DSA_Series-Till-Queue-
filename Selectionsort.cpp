#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
  for(int i=0; i<n-1; i++){
    int minIndex=i;
    for(int j=i+1; j<n; j++){
      if(arr[j]<arr[minIndex]){
        minIndex=j;
      }
    }
    swap(arr[minIndex],arr[i]);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  cout << "Sorted array in Acsending Order:\n";
  printArray(data, size);
}