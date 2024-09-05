#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "enter size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (arr[i] * arr[i]);
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}