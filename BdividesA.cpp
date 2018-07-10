#include <iostream>
using namespace std;

int main() {
    int A, B, R;
    bool divides;

    cout << "Give two integers: " ;
    cin >> A >> B;

    R = A % B;
    divides = (R == 0);

    cout << "B divides A? " << divides << endl;

    return 0;
}
