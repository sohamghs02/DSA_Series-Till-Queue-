#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter limit:" << endl;
  cin >> n;
  // STEP ONE
  /*int i=1;
  while(i<=n){
    int j=1,value=i;
    while(j<=i){
      cout<<value<<" ";
      value+=1;
      j+=1;
    }*/

  // STEP 2
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      cout << i + j - 1 << " ";
      j = j + 1;
    }
    cout << endl;
    i += 1;
  }
}
/*
pattern 9:
1
2 3
3 4 5
4 5 6 7
*/