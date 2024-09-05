#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(string str){
    int start = 0;
    int end = str.length() - 1;
    while (start < end){
        if (toLowerCase(str[start]) != toLowerCase(str[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    string str;
    getline(cin, str);

    if (isPalindrome(str)){
        cout<<"is palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
    return 0;
}