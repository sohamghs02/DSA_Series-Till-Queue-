#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
  for(int i=1; i<n; i++){
    bool swapped = false;
    for(int j=0; j<n-i; j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped = true;
      }
    }
    if(swapped==false){
      break;
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}
int main() {
  int data[] = {-2, 45, 0, 11, -9};  
  int size = sizeof(data) / sizeof(data[0]);  
  bubbleSort(data, size);  
  cout << "Sorted Array in Ascending Order:\n";
  printArray(data, size);
}