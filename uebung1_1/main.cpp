#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return tolower(c); });
    return str;
}

int main() {
    string tempUnit;
    const string celsiusUnit = "C", fahrenheitUnit = "F",
            celsiusUnitLower = toLowerCase(celsiusUnit), fahrenheitUnitLower = toLowerCase(fahrenheitUnit);
    double tempValue = 0.0, convertedTemp;

    // set temperature unit
    cout << "Möchten Sie die Temperatur " << celsiusUnit << " (Celsius) oder " << fahrenheitUnit
         << " (Fahrenheit) angeben? (" << celsiusUnitLower << "/" << fahrenheitUnitLower << "): ";
    cin >> tempUnit;
    if (tempUnit != celsiusUnitLower && tempUnit != fahrenheitUnitLower) {
        throw exception();
    }

    // set temperature value
    cout << "Welche Temperatur soll umgewandelt werden?: ";
    cin >> tempValue;

    if (tempUnit == fahrenheitUnit) {
        cout << tempValue << fahrenheitUnit << " wird in Celsius umgerechnet" << endl;
        convertedTemp = 5.0 / 9.0 * (tempValue - 32.0);
        cout << tempValue << fahrenheitUnit << " = " << convertedTemp << celsiusUnit << endl;
    } else {
        cout << tempValue << celsiusUnit << " wird in Fahrenheit umgerechnet" << endl;
        convertedTemp = tempValue * 1.8 + 32.0;
        cout << tempValue << celsiusUnit << " = " << convertedTemp << fahrenheitUnit << endl;
    }

    return 0;
}
