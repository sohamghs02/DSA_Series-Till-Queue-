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
      char ch = 'A'+i-1; 
      cout<<ch<<" ";
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}
/*
pattern 11:
A A A A 
B B B B 
C C C C 
D D D D 
*/