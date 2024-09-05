#include <iostream>
using namespace std;
int main() {
  int n,c=1;
  cout<<"enter limit:"<<endl;
  cin>>n; 
  int i=1;  
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<c<<" ";
      c+=1;
      j+=1;
    }
    cout<<endl;
    i+=1;
  }
}

/*
pattern 8:
1
2 3
4 5 6
7 8 9 10
*/