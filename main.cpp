#include <iostream>
using namespace std;

int main() {
    int startOne, startTwo, endOne, endTwo, s, e;
    cout << "Enter the start time of your first appointment: " << endl;
    cin >> startOne;
    cout << "Enter the end time of your first appointment: " << endl;
    cin >> endOne;
    cout << "Enter the start time of your second appointment: " << endl;
    cin >> startTwo;
    cout << "Enter the end time of your second appointment: " << endl;
    cin >> endTwo;
    //////////////////////////////
    //////////////////////////////
    if (startOne > startTwo) {
        s = startOne;
    } else {
        s = startTwo;
    }
    //////////////////////////////
    //////////////////////////////
    if (endOne > endTwo) {
        e = endOne;
    } else {
        e = endTwo;
    }
    //////////////////////////////
    //////////////////////////////
    if (s < e) {
        cout << "Appointments do overlap!";
    } else {
        cout << "Appointments do not overlap!";
    }
    return 0;
} //closes main function
