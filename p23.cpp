#include <iostream>
using namespace std;

int main() {
  int i = 1, j, n;
  cout << "Enter number: ";
  cin >> n;
  while (i <= n) {
    int space = n-i;
    while(space){
      cout << " ";
      space-=1;
    }
    j = 1;
    while (j <= i) {
      cout << i;
      j+=1;
    }
    cout << endl;
    i+=1;
  }
}
/*
pattern 23:
    1
   22
  333
 4444 
*/