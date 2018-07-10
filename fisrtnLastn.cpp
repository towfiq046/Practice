#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    char namestr[50], firstName[50], lastName[50];
    int nchar, lengthFirst, lengthLast, i, j;

    // input name
    cout << "Enter first name and last name: ";
    gets(namestr);
    nchar = strlen(namestr);

    // scan name and put first name in firstName variable
    for(i = 0, j = 0; i < nchar; i++, j++) {
        if(namestr[i] != ' ') {
            firstName[j] = namestr[i];
        }
        else break;
    }

    //print first name and length of first name
    lengthFirst = j;
    firstName[lengthFirst] = '\0';
    cout << "First name: " << firstName << endl;
    cout << "Length: " << lengthFirst;


    // multiple spaces are ignored and only one name is entered
    while(namestr[i] == ' ') i++;
    if(i == nchar) {
        cout << "\nYour name is printed " << endl;
        return -1;
    }


    // scan remaining name and put last name in lastName variable
    for(j = 0; i < nchar; i++, j++) {
        if(namestr[i] != ' ') {
            lastName[j] = namestr[i];
        }
        else break;
    }

    //print last name and length of last name
    lengthLast = j;
    lastName[lengthLast] = '\0';
    cout << "\nLast name: " << lastName << endl;
    cout << "Length: " << lengthLast;


    return 0;




}






