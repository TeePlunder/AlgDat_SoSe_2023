#include <iostream>
#include <sstream>

using namespace std;

int newConsoleInput(const string& message,int minRange, int maxRange) {
    bool validInput = false;
    int inputValue;

    while (!validInput) {
        ostringstream os;
        os << "Die Eingabe muss sich zwischen " << minRange << " und " << maxRange << " befinden";
        cout << message << " (" << os.str() << "): ";
        cin >> inputValue;

        if(minRange <= inputValue && inputValue <= maxRange) {
            validInput = true;
        } else {
            cout << "ERROR: " << os.str() << endl;
        }
    }
    return inputValue;
}

int main() {
    int decimal, numberSystem;
    const int MIN_DECIMAL_RANGE = 0, MAX_DECIMAL_RANGE = INT_MAX;
    const int MIN_NUMBER_SYSTEM = 2, MAX_NUMBER_SYSTEM=16;

    do {
        cout << "neue Konvertierung gestartet" << endl;
        decimal = newConsoleInput("Welche Dezimalzahl soll umgewandelt werden? [0 = Programmende]", MIN_DECIMAL_RANGE, MAX_DECIMAL_RANGE);

        if(decimal == 0) {
            return 0;
        }

        numberSystem = newConsoleInput("In welches Zahlensystem soll die Zahl umgewandelt werden?", MIN_NUMBER_SYSTEM, MAX_NUMBER_SYSTEM);

        cout << decimal << " (10) ";

        // using array
        // const char sym[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        // using pointer
        const char *sym = "0123456789abcdef";

        int count = 0;
        int rest[32];
        do {
            rest[count] = decimal % numberSystem;
            decimal = decimal / numberSystem;
            count++;
        } while (decimal > 0);

        cout << "-> ";

        for(int x = count - 1; x >= 0; x--) {
            cout << sym[rest[x]];
        }

        cout << " (" << numberSystem << ")" << endl << endl;
    }
    while (true);
}

