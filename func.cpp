#include <iostream>
using namespace std;

int myEncode(int q1Marks, int q2Marks);
int power(int base, int exponent);

int main() {
    int numStudents, q1Marks, q2Marks, cipher;
    int count, i, j, twoRaisedQ1, threeRaisedQ2;

    cout << "Enter number of students: "; cin >> numStudents;

    for(count = 1; count <= numStudents; count++) {
        cout << "Enter quiz1 and quiz2 marks of student " << count << " : ";
        cin >> q1Marks >> q2Marks;

        cipher = myEncode(q1Marks, q2Marks);
    }

    cout << "Cipher: " << cipher;

    return 0;
}


int myEncode(int q1Marks, int q2Marks) {
    int i, j, twoRaisedQ1;
    int threeRaisedQ2, cipher;

    twoRaisedQ1 = power(2, q1Marks);
    threeRaisedQ2 = power(3, q2Marks);

    cipher = twoRaisedQ1 * threeRaisedQ2;

    return cipher;
}

int power(int base, int exponent) {
    int i, result;
    for (i = 0, result = 1; i < exponent; i++, result *= base) { };
    return result;
}
