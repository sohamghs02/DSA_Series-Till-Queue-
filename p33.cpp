#include <iostream>
using namespace std;

int main() {
  int  n;
  cout << "Enter number: ";
  cin >> n;  
  int i = 1;
  while(i<=n){
    int space = i - 1;
    while(space){
      cout<<" ";
      space--;
    }
    int j = 1;
    while(j<=n-i+1){
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }
}