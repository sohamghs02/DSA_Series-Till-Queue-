#include <iostream>
using namespace std;

void sort(int arr[], int idx, int size) {
    // Base case
    if (idx == size)
        return;
    int curr = arr[idx];
    int j = idx - 1;
    while (j >= 0) {
        if (curr < arr[j]) { // Found greater value than curr, shift to right
            arr[j + 1] = arr[j--];
        } else // Smaller element found
            break;
    }
    arr[j + 1] = curr; // Place curr element at correct place
    // One part done, recursion will do the other work
    sort(arr, idx + 1, size);
}

int main() {
    // Array to be sorted
    int arr[] = {10, 1, 7, 6, 14, 9};
    int size = 6;
    // Recursive function call
    sort(arr, 1, size);
    // Printing the array at the end
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

