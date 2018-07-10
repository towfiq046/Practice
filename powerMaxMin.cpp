#include <iostream>
using namespace std;

int main() {
    int twoRaisedMax = 1, threeRaisedMin = 1;
    int m, n, i, j;

    cout << "Give m and n: "; cin >> m >> n;

    for (i = m, j = n; ((i >= 1) || (j >= 1)); i--, j--) {
        if ((i >= 1) && (j >= 1)) {
            threeRaisedMin *= 3;
        }
        twoRaisedMax *= 2;
    }

    cout << "2^max is: " << twoRaisedMax << ", 3^min is: " << threeRaisedMin;

    return 0;

}
