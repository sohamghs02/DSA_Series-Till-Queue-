#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter limit: ";
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      char ch = 'A'+i+j-2;
      cout<<ch<<" ";
      j+=1;
    }
    cout<<endl;
    i+=1;
  }
}
/*
pattern 16:
A
B C
C D E
D E F G
*/