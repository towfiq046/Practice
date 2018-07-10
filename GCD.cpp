#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    for ( ; b != 0; ) {

        temp = a % b;
        a = b;
        b = temp;
    }

    cout << "GCD = " << a;

    return 0;
}
