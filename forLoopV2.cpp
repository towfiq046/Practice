#include <iostream>
using namespace std;
int main() {
    int sum, max, min, count, numOfStudents, marks;
    float average;

    cout << "Enter number of students: ";
    cin >> numOfStudents;

    for(sum = 0, count = 1; count <= numOfStudents; count++) {
        cout << "Enter marks of student " << count << ":";
        cin >> marks;

        if(marks < 0) {
            if(marks != -1000) {
                cout << "Invalid marks!" << endl;
                continue;
            }
            else {
                cout << "All marks read.";
                break;
            }
        }

        sum += marks;
        if(count == 1) {
            min = marks; max = marks;
        }

        else {
            min = (min > marks) ? marks: min;
            max = (max < marks) ? marks: max;
        }

    }

    average = sum / (count + 0.0);
    cout << "Count of valid marks: " << count << "\nSum:" << sum << endl;
    cout << "Average: " << average << " Min: " << min << " Max: " << max;

    return 0;
}
