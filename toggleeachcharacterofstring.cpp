#include <iostream>
#include <string>
using namespace std;

string toggleString(string str){
    for (int i = 0; i < str.length(); i++){        
        if (isupper(str[i])){
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i])){
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

//without using string function
/*void toggleStr(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        } else if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        i++;
    }
}*/

int main() {
    string str;
    getline(cin, str);
    
    cout<<"Toggled string: "<<toggleString(str)<< endl;
    return 0;
}