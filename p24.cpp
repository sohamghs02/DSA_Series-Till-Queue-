#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter Limit: ";
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    int k = i;
    while (j < i) {
      cout << " ";
      j++;
    }
    while (k <= n) {
      cout << k;
      k++;
    }
    cout << endl;
    i++;
  }
}
/*
pattern 24:
1234
 234
  34
   4
*/