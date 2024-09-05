#include <iostream>
using namespace std;
int main() {
  int n;
  char ch = 'A';
  cout << "enter limit:" << endl;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;    
    while (j <= n) {       
      cout<<ch<<" ";
      ch+=1;
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}
/*
pattern 13:
A B C D
E F G H
I J K L
M N O P
*/