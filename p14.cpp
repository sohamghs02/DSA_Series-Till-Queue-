#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter limit:" << endl;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n) { 
      char ch = 'A'+i+j-2;
      cout<<ch<<" ";
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}
/*
pattern 14:
A B C D
B C D E
C D E F
D E F G
*/