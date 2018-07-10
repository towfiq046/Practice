#include <iostream>
using namespace std;

int fact(int num) {

    int result = 1;
    for(int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int factRec(int num) {

    if(num < 1) {
        return 1;
    }
    else{
        return num * factRec(num - 1);
    }
}

int main() {

    int num;
    cout << "Enter a number to calculate it's factorial: ";
    cin >> num;
    cout << "The answer by iteration is: " << fact(num) << endl;
    cout << "The answer by recursion is: " << factRec(num) << endl;
}
