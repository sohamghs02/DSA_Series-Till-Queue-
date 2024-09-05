#include <iostream>
#include <string>
using namespace std;

string removeBrackets(string expr){
    string result = "";
    for(char c: expr) {
        if (c != '(' && c != ')'){
            result += c;
        }
    }
    return result;
}

int main() {
    string expr;
    getline(cin, expr);
  
    cout<<removeBrackets(expr)<<endl;
    return 0;
}