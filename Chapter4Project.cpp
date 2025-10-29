// Shipping Subproject Branch

#include <iostream>
using namespace std;

int main()
{
    double smallRate = 1.10/500;
    double mediumRate = 2.20/500;
    double largeRate = 3.70/500;
    double hugeRate = 4.80/500;
    double packageSize, costCalc;
    int travel;

    do {
        cout << "Enter the size of your package(kg, 0.1-20): " << endl;
        cin >> packageSize;
    } while (packageSize >= 21 || packageSize <= 0);

    do {
        cout << "Enter the distance your package is traveling(mi, 0-3000): " << endl;
        cin >> travel;
    } while (travel >= 3001 || travel <= 0);

    if (packageSize > 10) {
        costCalc = hugeRate;
    } else if (packageSize <= 10 && packageSize > 6) {
        costCalc = largeRate;
    } else if (packageSize <= 6 && packageSize > 2) {
        costCalc = mediumRate;
    } else {
        costCalc = smallRate;
    }

    cout << "To travel " << travel << " miles with a package weighing " << packageSize << " kilograms, you'll need to pay $" << costCalc * travel << endl;

 return 0;
}