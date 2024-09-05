#include <iostream>
using namespace std;

void sort(int arr[], int idx, int size){
    // base case
    if (idx == size)
        return;
    int smallestIdx = idx; // take curr idx element as smallest
    for (int i = idx + 1; i < size; i++) {
        if (arr[smallestIdx] > arr[i]) // found another smallest element than arr[smallestIdx]
            smallestIdx = i; // update the smallestIdx val
    }
    // place smallest element found at idx
    swap(arr[idx], arr[smallestIdx]);
    // one part Done recursion will do other work;
    sort(arr, idx + 1, size);
}

int main() {
    int arr[] = {6, 2, 8, 4, 10};
    int size = 5;
    sort(arr, 0, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

