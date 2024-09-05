#include <iostream>
using namespace std;

int main() {
  int n;
  int i = 1;
  cout<<"Enter Limit: ";
  cin >> n;
  while (i <= n) {
    int space = i - 1;
    while (space) {
      cout << " ";
      space = space - 1;
    }
    int star = n - i + 1;
    while (star) {
      cout << "*";
      star -= 1;
    }
    cout << endl;
    i += 1;
  }
  return 0;
}
/*
pattern 20:
****
 ***
  **
   *
*/