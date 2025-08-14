#include<bits/stdc++.h>
using namespace std;

void week_day(int day) {
    switch(day) {
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;
        default:
            cout << "Invalid input! Enter number between 1 and 7.";
    }
}

int main() {
    int day;
    cout << "Enter a number from (1-7): ";
    cin >> day;

    week_day(day);
    cout << endl;
    return 0;
}
