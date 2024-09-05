#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter Limit: ";
  cin >> n;
  int num = 1;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n - i) {
      cout << "  ";
      j++;
    }
    int k = 1;
    while (k <= i) {
      cout << num << " ";
      num++;
      k++;
    }
    cout << endl;
    i++;
  }
}
/*
pattern 25:
        1
      2 3 
    4 5 6
  7 8 9 10  
*/