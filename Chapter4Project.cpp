// Months and Days Subproject

#include <iostream>
using namespace std;

int main()
{
    int month;
    int year;

    cout << "Greetings! Do you want to know how many days are in a given month of the year?" << endl;

    do {
        cout << "Enter a Valid Month, please(0-11): " << endl;
        cin >> month;
    } while (month>11 || month<0);


    do {
        cout << "Enter a Valid Year, please: " << endl;
        cin >> year;
    } while (year < 0);

    if (month == 3 || month == 5 || month == 8 || month == 10) {
        cout << "That month has 30 days!"<< endl;
    } else if (month == 0 || month == 2 || month == 4 || month == 6 || month == 7 || month == 9 || month == 11) {
        cout << "That month has 31 days!" << endl;
    }
    else {
        if (year % 4 == 0 && month == 1) {
            cout << "February in this year has 29 days!\n";
        }
        else {
            cout << "February in this year has 28 days!\n";
        }
    }

    return 0;
}