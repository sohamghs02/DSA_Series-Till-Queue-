#include <iostream>
using namespace std;

bool isPrime(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}
int main() {
  int num;
  cout << "Enter the number: ";
  cin >> num;
  if (isPrime(num)) {
    cout << " is a Prime number " << endl;
  } else {
    cout << "Not a prime number " << endl;
  }
}