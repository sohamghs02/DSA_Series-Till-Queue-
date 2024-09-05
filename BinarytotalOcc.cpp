#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;  
  int mid = start + (end - start)/2;
  int ans = -1;
 
  while (start <= end) {
    if (arr[mid] == key) {
        ans =mid;
        end = mid - 1;      
    }    
    else if (key > arr[mid]) {
      start = mid + 1;
    }
    else { // key < arr[mid]
      end = mid - 1;
    }
    mid = start + (end - start)/2;
  }
  return ans;
}
int lastOcc(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;  
  int mid = start + (end - start)/2;
  int ans = -1;
 
  while (start <= end) {
    if (arr[mid] == key) {
        ans =mid;
        start = mid + 1;      
    }    
    else if (key > arr[mid]) {
      start = mid + 1;
    }
    else if(key < arr[mid]) { // key < arr[mid]
      end = mid - 1;
    }
    mid = start + (end - start)/2;
  }
  return ans;
}
int totOcc(int arr[], int size, int key){
    int ans = (lastOcc(arr, size, key) - firstOcc(arr, size, key)) + 1;
    return ans;
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
  cout<<"Total Occurence of "<<key<<" is "<<totOcc(arr, n , key)<<endl;
  return 0;
}