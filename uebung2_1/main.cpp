#include <iostream>
#include "MESSUNG.h"

using namespace std;

int main() {

    MESSUNG messung1(5);
    messung1.print();

    cout << "messung2" << endl;
    MESSUNG messung2(messung1);
    messung2.print();

    messung2.setMesswert(3, 6);

    messung1.vergleiche(messung2);

    return 0;
}
