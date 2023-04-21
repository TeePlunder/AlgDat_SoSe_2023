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
    int decimal = 223;
    int numberSystem = 2;

    cout << decimal << " (10)";

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

    cout << " -> ";

    for(int x = count - 1; x >= 0; x--) {
        int restValue = rest[x];
        char value = sym[restValue];
        cout << value;
        decimal = newConsoleInput("Welche Dezimalzahl soll umgewandelt werden? [0 = Programmende]", MIN_DECIMAL_RANGE, MAX_DECIMAL_RANGE);
        numberSystem = newConsoleInput("In welches Zahlensystem soll die Zahl umgewandelt werden?", MIN_NUMBER_SYSTEM, MAX_NUMBER_SYSTEM);
    }

    cout << " (" << numberSystem << ")" << endl;
    return 0;
}
