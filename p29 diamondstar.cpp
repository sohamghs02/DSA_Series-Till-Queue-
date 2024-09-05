#include <iostream>
using namespace std;

int main(){
    int number, i, k, count = 1;
    cout << "Enter number of rows: " <<endl;
    cin >> number;
    count = number - 1;
    for (k = 1; k <= number; k++) {
        for (i = 1; i <= count; i++)
            std::cout << " ";
        count--;
        for (i = 1; i <= 2 * k - 1; i++)
            cout << "*";
        cout << endl;
    }
    count = 1;
    for (k = 1; k <= number - 1; k++) {
        for (i = 1; i <= count; i++)
            cout << " ";
        count++;
        for (i = 1; i <= 2 * (number - k) - 1; i++)
            cout << "*";
        cout << endl;
    }
    return 0;
}

