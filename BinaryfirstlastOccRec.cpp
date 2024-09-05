#include <iostream>
using namespace std;

int firstOcc(int arr[], int start, int end,  int size, int key){ 
  int mid = start + (end - start)/2;
  int ans = -1;
 
  while (start < end) {
    if (arr[mid] == key) {
        ans =mid;
        end = mid - 1;      
    }    
    else if (key > arr[mid]) {
      return firstOcc(arr, mid+1, end, size, key);
    }
    return firstOcc(arr, start, mid - 1, size, key);
  
  }
}
int lastOcc(int arr[], int start, int end,  int size, int key) { 
  int mid = start + (end - start)/2;
  int ans = 0;
 
  while (start < end) {
    if (arr[mid] == key) {
        ans = mid;
        start = mid + 1;      
    }    
    else if (key > arr[mid]) {
      return lastOcc(arr, mid+1, end, size, key);
    } // key < arr[mid]
    return lastOcc(arr, start, mid - 1, size, key);
  }
}
int main() {
  int n;
  cout << "enter the size of array:" << endl;
  cin >> n;
  int arr[n];
  cout << "Enter the Elements of array: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Enter the element to search for " << endl;
  int key;
  cin >> key;
  cout<<"First Occurence of "<<key<<" is "<<firstOcc(arr,0,n-1, n , key)<<endl;
  cout<<"Last Occurence of "<<key<<" is "<<lastOcc(arr,0,n-1, n , key)<<endl;
  return 0;
}