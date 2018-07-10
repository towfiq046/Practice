#include <iostream>
using namespace std;

int main() {

    int mark, max, min, sum = 0, numStudent, count;
    float average;
    cout << "Give number of students: "; cin >> numStudent;

    count = 1.0;
    while(count <= numStudent) {
        cout << "Give marks of student " << count << ": "; cin >> mark;
        sum += mark;

        if(count == 1) { max = mark; min = mark; }
        else {
            min = (min > mark) ? mark: min;   /// mark is new min is old
            max = (max < mark) ? mark: max;   /// ternary operator condition ? ifTrue: ifFalse
        }

        count++;
    }

    average = sum / (float) count;
    cout << "\nAverage: " << average << "\nSum: " << sum << endl;
    cout << "Min: " << min << " Max: " << max << endl;
    cout << "h" << count;

    return 0;
}
