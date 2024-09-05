#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"enter limit:"<<endl;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<j;
      j+=1;
    }
    cout<<endl;
    i+=1;
  }
}
/*
pattern 3:
12345
12345
12345
12345
12345
*/