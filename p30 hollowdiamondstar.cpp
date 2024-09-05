#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i, j;
    // code for the upper half
    for (i = 1; i <= n; i++) {
        // this loop prints the preceding spaces
        for (j = n; j > i; j--) {
            cout << " ";
        }
        // the first star is printed after the left preceding spaces
        cout << "*";
        // this loop prints the spaces in between the two stars
        // for the first and last row since there is only one star
        // therefore no space is printed in between the stars
        for (j = 1; j < (i - 1) * 2; j++) {
            cout << " ";
        }
        // if it is the first row change the Line
        // else print the second star also
        if (i == 1) {
            cout << endl;
        } else {
            cout << "*" << endl;
        }
    }
    // code for the lower half
    for (i = n - 1; i >= 1; i--) {
        // this loop prints the spaces
        for (j = n; j > i; j--) {
            cout << " ";
        }
        // print the star after all the left spaces are done
        cout << "*";
        // print the spaces between the stars
        // for the last row there is only one star so no space is printed
        for (j = 1; j < (i - 1) * 2; j++) {
            cout << " ";
        }
        // if we reached the last row change the line. We are done.
        // else print the second star also
        if (i == 1) {
            cout << endl;
        } else {
            cout << "*" << endl;
        }
    }
    return 0;
}