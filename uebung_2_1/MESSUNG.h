//
// Created by Leon Bergmann on 05.05.23.
//

#ifndef UEBUNG_2_1_MESSUNG_H
#define UEBUNG_2_1_MESSUNG_H


class MESSUNG {
private:
    double *messwert;
    int anzahl;
public:
    MESSUNG(int n);
    MESSUNG(const MESSUNG &m);
    void setMesswert(int index, double wert);
    ~MESSUNG();
    void print();
};


#endif //UEBUNG_2_1_MESSUNG_H
