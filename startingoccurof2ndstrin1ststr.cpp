#include <iostream>
using namespace std;

int findSubstring(char* str1, char* str2) {
    int i = 0, j = 0;
    int startIndex = 0;

    while (str1[i] != '\0'){        
        if (str1[i] == str2[j]){
            if (j == 0) {
                startIndex = i; 
            }
            j++;           
            if (str2[j] == '\0') {
                return startIndex + 1;
            }
        }
        else{           
            j = 0;
        }
        i++;
    }    
    return 0;
}

int main(){    
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    
    int result = findSubstring(str1, str2);
    cout << result << endl;
    return 0;
}