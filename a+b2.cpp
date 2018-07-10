#include <iostream>
using namespace std;
int main() {
    int a, b, ans;

    cout << "A: "; cin >> a;
    cout << "B: "; cin >> b;

    ans = a*a + 2*a*b + b*b;

    cout << "(a + b)^2 = " << ans << endl;

}
