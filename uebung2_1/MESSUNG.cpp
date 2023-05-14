//
// Created by Leon Bergmann on 05.05.23.
//

#include "MESSUNG.h"
#include <iostream>

using namespace std;


MESSUNG::MESSUNG(int anzahl) {
    this->messwert = new double[anzahl];
    for (int i = 0; i < anzahl; ++i) {
        this->messwert[i] = 0;
    }
    this->anzahl = anzahl;
}

MESSUNG::MESSUNG(const MESSUNG &m) {
    this->anzahl = m.anzahl;
    this->messwert = new double[m.anzahl];
    for (int x = 0; x < m.anzahl; ++x)
        this->messwert[x] = m.messwert[x];

}

MESSUNG::~MESSUNG() {
delete [] messwert;
}

void MESSUNG::setMesswert(int index, double wert) {
    if(index < 0 || index > this->anzahl - 1) {
        cout << "Ein Fehler beim Setzen ist aufgetreten" << endl;
        return;
    }
    this->messwert[index] = wert;
    cout << "Das Setzen war erfolgreich" << endl;
}

void MESSUNG::print() {
    cout << "Anzahl: " << this->anzahl << "\n" << "Messwerte:" << endl << "[";
    for (int x = 0; x < this->anzahl; ++x) {
        cout << this->messwert[x];
        if(x + 1 != this->anzahl) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

void MESSUNG::vergleiche(const MESSUNG &messung) {
    for (int x = 0; x < messung.anzahl; ++x) {
        double wert1 = messung.messwert[x];
        double wert2 = this->messwert[x];

        if(wert1 > wert2) {
            cout << "Wert1 (" << wert1 << ") > Wert2 (" << wert2 << ")" << endl;
            continue;
        }
        if (wert2 > wert1) {
            cout << "Wert1 (" << wert1 << ") < Wert2 (" << wert2 << ")" << endl;
        } else {
            cout << "Wert1 (" << wert1 << ") = Wert2 (" << wert2 << ")" << endl;
        }

    }
}
