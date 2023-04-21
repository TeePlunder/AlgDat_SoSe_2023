#include <iostream>

using namespace std;

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
    }

    cout << " (" << numberSystem << ")" << endl;
    return 0;
}
