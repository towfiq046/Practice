#include <iostream>
using namespace std;

int main() {

    int date, year, month, time, onlyYear, dateAndMonth, onlyMonth, onlyDate, message, hour, minute;

    cout << "Give date (DDMMYYYY) and time (HHMM)" << endl; ///date 12052018 time 0615
    cin >> date >> time;

    onlyYear = date % 10000;         /// 12052018 % 10000 = 2018
    dateAndMonth = date / 10000;      /// 12052018 / 10000 = 1025
    onlyMonth = dateAndMonth % 100;
    onlyDate = dateAndMonth / 100;

    if((onlyDate < 1) || (onlyDate > 31) || (onlyMonth < 1) || (onlyMonth > 12) || (onlyYear < 2014)) {
        cout << "Wrong date input!!" << endl;
        return -1;
    }

    hour = time / 100;
    minute = time % 100;

    if(hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        cout << "Wrong time input!!" << endl;
        return -1;
    }

    if(hour >= 6 && hour < 12) {
        cout << "Good Morning!!" << endl;
    }

    else if(hour >= 12 && hour < 18) {
        cout << "Good Afternoon!!" << endl;
        }

        else if(hour >= 18 && hour > 20) {
            cout << "Good Evening!!" << endl;
        }

        else {
            cout << "Good Night!!" << endl;
        }


    message = (date + time) % 3;

    switch (message) {
        case 0: cout << "message 1" << endl; break;
        case 1: cout << "message 2" << endl; break;
        default: cout << "message 3" << endl;
    }


        return 0;
    }
