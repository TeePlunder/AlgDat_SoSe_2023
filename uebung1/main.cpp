#include <iostream>

using namespace std;

int main() {
    string tempUnit;
    const string celsiusUnit = "C", fahrenheitUnit = "F";
    double tempValue = 0.0, convertedTemp = 0.0;

    // set temperature unit
    cout << "Möchten Sie die Temperatur " << celsiusUnit << " (Celsius) oder " << fahrenheitUnit
         << " (Fahrenheit) angeben? (" << celsiusUnit << "/" << fahrenheitUnit << "): ";
    cin >> tempUnit;
    if (tempUnit != celsiusUnit && tempUnit != fahrenheitUnit) {
        throw exception();
    }

    // set temperature value
    cout << "Welche Temperatur soll umgewandet werden?: ";
    cin >> tempValue;

    if (tempUnit == fahrenheitUnit) {
        cout << tempValue << "F wird in Celsius umgerechnet" << endl;
        convertedTemp = 5.0 / 9.0 * (tempValue - 32.0);
        cout << tempValue << fahrenheitUnit << " = " << convertedTemp << celsiusUnit << endl;
    }

    return 0;
}
