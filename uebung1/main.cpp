#include <iostream>

using namespace std;

int main() {
    string tempUnit;
    const string celsiusUnit = "C", fahrenheitUnit = "F";
    double tempValue;

    // set temperature unit
    cout << "Möchten Sie C (Celsius) oder F (Fahrenheit) angeben? (" << celsiusUnit << "/" << fahrenheitUnit << "): ";
    cin >> tempUnit;
    if(tempUnit != "c" || tempUnit != "f") {
        throw exception();
    }

    if(tempUnit == "c")

    return 0;
}
