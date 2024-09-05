#include <iostream>
using namespace std;

void swapAlt(int arr[], int n) {
  for (int i = 0; i < n; i += 2) {
    if (i + 1 < n) {
      swap(arr[i], arr[i + 1]);
    }
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[10], n;
  cout << "enter size of array: " << endl;
  cin >> n;
  cout << "enter elements of array: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  swapAlt(arr, n);
  printArray(arr, n);

  return 0;
}