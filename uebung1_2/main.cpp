#include <iostream>

using namespace std;

int main() {

    cout << "decimal to binary - 13 -> ??";
    int decimal = 13;
    int binary [4];

    int count = 0;
    do {
        int binaryNumber = decimal % 2;
        binary[count] = binaryNumber;
        decimal = decimal / 2;
        count++;
    } while (decimal > 0);

    return 0;
}
