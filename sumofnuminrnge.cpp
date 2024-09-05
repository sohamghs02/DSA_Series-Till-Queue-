#include <iostream>
using namespace std;

int main() {
  int a,b,sum=0;
  cout<<"Enter Opening and closing range:"<<endl;
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    sum+=i;
  }
  cout<<"sum in the range is:"<<sum<<endl;
}