#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter Limit: ";
  cin >> n;
  int j = 1;
  while (j <= n) {
    int i = n - j + 1;
    while (i >= 1) {
      cout << j;
      i--;
    }
    cout << endl;
    j++;
  }
}
/*
pattern 22:
1111
222
33
4
*/