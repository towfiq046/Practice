#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char string[10];
    int length, i, numwords = 0;

    cout << "Enter a string: ";
    gets(string);
    for(i = 0; i < 9; i++) {
        if(string[i] == '\0') break;
    }

    length = i;


    for(i = 0; i < length; i++) {
        if(string[i] == ' ' || string[i] == '\0') {
            numwords++;
            cout << endl;
            continue;
        }
        cout << string[i];
    }

    cout << endl;
    cout << endl << "Number of strings: " << numwords;

    return 0;
}
