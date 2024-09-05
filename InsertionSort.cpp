#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int temp = arr[i];
    int j = i - 1;
    for(; j>=0; j--){
      if(arr[j]>temp){
        arr[j+1]=arr[j];
      }
      else{
        break;
      }
    }
    arr[j+1]=temp;
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  cout << "Sorted array in ascending order:\n";
  printArray(data, size);
}