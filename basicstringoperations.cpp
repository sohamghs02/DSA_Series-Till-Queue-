#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "Hello";
    string str2 = "World";
    
    string strCopy = str1;
    cout << "Copied string: " << strCopy << endl;
   
    string strConcat = str1 + " " + str2;
    cout << "Concatenated string: " << strConcat << endl;
    
    if (str1 == str2) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }
    
    int result = str1.compare(str2);
    if (result == 0) {
        cout << "Strings are equal." << endl;
    } else if (result < 0) {
        cout << "str1 is less than str2." << endl;
    } else {
        cout << "str1 is greater than str2." << endl;
    }
    return 0;
}