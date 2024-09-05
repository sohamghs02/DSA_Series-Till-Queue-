#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;
  //int mid = start + (end - start)/2;
  //[FOR INTEGERS WHICH EXCEDES RANGE 2^31 - 1]
  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    }    
    if (key > arr[mid]) {
      start = mid + 1;
    } else { // key < arr[mid]
      end = mid - 1;
    }
    mid = (start + end) / 2;
    //int mid = start + (end - start)/2;
  }
  return -1;
}
int main() {
  int arr[10], n;
  cout << "enter the size of array:" << endl;
  cin >> n;
  cout << "Enter the Elements of array: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Enter the element to search for " << endl;
  int key;
  cin >> key;
  int index = binarySearch(arr, n, key);
  cout << "index of " << key << " is " << index << endl;
}
