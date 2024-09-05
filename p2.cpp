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
      cout<<i;
      j+=1;
    }
    cout<<endl;
    i+=1;
  }
}
/*
pattern 2:
11111
22222
33333
44444
55555
*/