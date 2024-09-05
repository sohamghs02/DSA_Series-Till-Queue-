#include <iostream>
using namespace std;

void print_binary(int num) {
  int result = 0;
  int place_value = 1;
  while (!(num == 0) |( num == -1)) {
    int bit = num & 1;
    result += bit * place_value;
    num = num >> 1;
    place_value *= 10;
  }
  cout << "It's Binary Form is: " << result << endl;
}
int main() {
  int number;
  cout << "Enter Decimal Number: ";
  cin >> number;
  int neg_number = ~number + 1; // 2's Complement(1's Complement + 1)
  print_binary(neg_number);
}