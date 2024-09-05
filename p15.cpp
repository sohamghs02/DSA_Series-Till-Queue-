#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter limit:" << endl;
  cin >> n;
  int i = 1;
  char value = 'A';
  while (i <= n) {
    int j = 1;    
    while (j <= i) {       
      cout<<value<<" ";
      value+=1;
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}
/*
pattern 15:
A
B C
D E F
G H I J
*/