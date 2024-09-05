#include <iostream>
using namespace std;

int main() {
    char input[1000];
    cout << "Enter a string: ";
    cin.getline(input, 1000);

    int length = 0;
    int i = 0;
    while (input[i] != '\0') {
        if (input[i] != ' ') {
            length++;
        } else {
            if (length > 0) {
                cout << length << endl;
                length = 0;
            }
        }
        i++;
    }
    if (length > 0) {
        cout << length << endl;
    }
    return 0;
}