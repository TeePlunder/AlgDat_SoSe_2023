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
