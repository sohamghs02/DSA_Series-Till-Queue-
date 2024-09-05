#include <iostream>
using namespace std;

void reverseWord(char* start, char* end){
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(){
    char input[100];
    cout << "Enter a sentence: ";
    cin.getline(input, 100);

    int i = 0;
    int wordStart = 0;
    int wordEnd = 0;
    int wordCount = 0;

    while (input[i] != '\0'){        
        while (input[i] == ' '){
            i++;
        }
        wordStart = i;       
        while (input[i] != ' ' && input[i] != '\0') {
            i++;
        }
        wordEnd = i - 1;        
        if (wordCount % 2 == 0){ 
            reverseWord(&input[wordStart], &input[wordEnd]);
        }
        wordCount++;
    }
    cout << input << endl;
    return 0;
}