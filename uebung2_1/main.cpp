#include <iostream>
#include "MESSUNG.h"

using namespace std;

int main() {

    MESSUNG messung1(5);
    messung1.print();

    cout << "messung2" << endl;
    MESSUNG messung2(messung1);
    messung2.print();

    messung2.setMesswert(-100000, 6);
    messung2.setMesswert(3, 6);

    messung1.vergleiche(messung2);

    struct minmax ergebnis{};
    ergebnis = messung2.minmax();
    cout << "MinWert: " << ergebnis.min << " MaxWert: " << ergebnis.max << endl;

    return 0;
}
