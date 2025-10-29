// Geometry Calculator Subproject

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int calcChoice;
    const double PI = 3.14159;
    double circleRadius, rectLength, rectWidth, triBase, triHeight;

    cout << "Geometry Calculator\n" << "1. Calculate the Area of a Circle\n" << "2. Calculate the Area of a Rectangle\n" << "3. Calculate the Area of a Triangle\n" << "4. Quit\n" << endl;

    do {
        cout << "Choose(1-4): " << endl;
        cin >> calcChoice;
    } while (calcChoice > 4 || calcChoice < 1);

    if (calcChoice == 1) {
            do {
                cout << "\nEnter the Radius of the Circle(in inches): " << endl;
                cin >> circleRadius;
            } while (circleRadius <= 0);
            cout << "\nThe Area of the Circle is " << PI * pow(circleRadius, 2) << " inches squared" << endl;
    }

    if (calcChoice == 2) {
        do {
            cout << "\nEnter the Width of the Rectangle(in inches): " << endl;
            cin >> rectWidth;
        } while (rectWidth <= 0);
        do {
            cout << "\nEnter the Length of the Rectangle(in inches): " << endl;
            cin >> rectLength;
        } while (rectLength <= 0);
        cout << "\nThe Area of the Rectangle is " << rectWidth * rectLength << " inches squared" << endl;
    }

    if (calcChoice == 3) {
        do {
            cout << "\nEnter the Base of the Triangle(in inches): " << endl;
            cin >> triBase;
        } while (triBase <= 0);
        do {
            cout << "\nEnter the Height of the Triangle(in inches): " << endl;
            cin >> triHeight;
        } while (triHeight <= 0);
        cout << "\nThe Area of the Triangle is " << triBase * triHeight * 0.5 << " inches squared" << endl;
    }

    if (calcChoice == 4) {
        cout << "Calculator Dismissed" << endl;
    }
    return 0;
}