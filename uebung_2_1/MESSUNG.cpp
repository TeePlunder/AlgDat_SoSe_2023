//
// Created by Leon Bergmann on 05.05.23.
//

#include "MESSUNG.h"
#include <iostream>

using namespace std;


MESSUNG::MESSUNG(int n) {
    this->messwert = new double[n]{};
    cout << "Messungsarray" << messwert <<endl;
}

MESSUNG::MESSUNG(const MESSUNG &m) {
    this->anzahl = m.anzahl;
    auto *newMesswert = new double[m.anzahl];
    for (int x = 0; x < m.anzahl; ++x) {
        newMesswert[x] = this->messwert[x];
    }
    this->messwert = newMesswert;
}

MESSUNG::~MESSUNG() {
delete [] messwert;
}

void MESSUNG::setMesswert(int index, double wert) {
    this->messwert[index] = wert;
}

void MESSUNG::print() {
    cout << "Anzahl: " << this->anzahl << "\n" << "Messwerte:" << endl;
    for (int x = 0; x < this->anzahl; ++x) {
        cout << "[" << this->messwert[x] << ", ";
    }
    cout << "]" << endl;
}
