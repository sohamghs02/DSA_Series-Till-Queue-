#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2;
    cout << "enter size of array 1 : ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "enter elements of array 1 : ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "enter size of array 2 : ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "enter elements of array 2 : ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    int count = 0;
    for (int i = 0; i < n1; i++) {
        if (find(arr2.begin(), arr2.end(), arr1[i]) != arr2.end()) {
            count++;
        }
    }
    if (count == n1 && count == n2) {
        cout << "Arrays are same" << endl;
    } else {
        cout << "Arrays are not same" << endl;
    }
    return 0;
}

