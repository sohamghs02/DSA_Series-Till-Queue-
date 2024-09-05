#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
  int start = 0;
  int end = n - 1;
  while (start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[10],n;
  cout<<"enter size of array: "<<endl;
  cin>>n;
  cout<<"enter elements of array: "<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  reverse(arr,n);
  printArray(arr,n);

  return 0;
}