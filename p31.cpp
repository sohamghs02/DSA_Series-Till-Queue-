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
      cout<<(n-j+1);
      j+=1;
      cout<<" ";
    }
    cout<<endl;
    i+=1;
  }
}