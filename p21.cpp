#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter Limit: ";
  cin >> n;
  int i = 1;
  while (i <= n) {
    int start = 1;
    int j = 1;
    while (j <= n - i + 1) {
      cout << start;
      start++;
      j++;
    }
    int star = i - 1;
    while (star) {
      cout << "*";
      star--;
    }
    int star2 = i - 1;
    while (star2) {
      cout << "*";
      star2 = star2 - 1;
    }
    int count = n - i + 1;
    while (count) {
      cout << count;
      count = count - 1;
    }
    cout << endl;
    i = i + 1;
  }
}
/*
pattern 21:
12344321
123**321
12****21
1******1
*/