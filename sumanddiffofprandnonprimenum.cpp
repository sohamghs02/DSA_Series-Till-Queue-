#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sumPrime = 0;
    int sumNonPrime = 0;

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sumPrime += arr[i];
        } else {
            sumNonPrime += arr[i];
        }
    }

    int difference = sumPrime - sumNonPrime;

    cout << "Sum of prime numbers: " << sumPrime << endl;
    cout << "Sum of non-prime numbers: " << sumNonPrime << endl;
    cout << "Difference between sum of prime and non-prime numbers: " << difference << endl;

    return 0;
}
