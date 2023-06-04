#include <iostream>
#include "list.h"

int main() {
    cout << "Einfach verkettete Liste:" << endl;
    LISTE list;
    list.append(2);
    list.append(3);
    list.append(5);

    cout << list.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    list.insert(4);
    list.insert(1);
    cout << list.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    list.insert(6);
    cout << list.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;

    list.remove(1);
    cout << list.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    list.remove(4);
    cout << list.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    list.remove(6);
    cout << list.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;

    LISTE connectList;
    connectList.append(6);
    connectList.append(7);
    connectList.append(8);

    list.connect(connectList);
    connectList.append(9);
    cout << list.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;

    cout << "--------------------------------------------------" << endl;
    cout << "-----------Doppelt verkettete Listen-----------" << endl;
    cout << "Doppelt verkettete Listen" << endl;
    D_LISTE dlist;
    dlist.insert(2);
    dlist.insert(6);
    dlist.insert(3);
    cout << dlist.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    dlist.insert(1);
    dlist.insert(4);
    cout << dlist.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    dlist.insert(12);
    cout << dlist.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    dlist.append(7);
    dlist.append(5);
    cout << dlist.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    dlist.remove(1);
    cout << dlist.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    dlist.remove(6);
    cout << dlist.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    dlist.remove(12);
    cout << dlist.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    cout << dlist.reverse_printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    D_LISTE l2;
    l2.append(9);
    l2.append(10);
    dlist.connect(l2);
    cout << dlist.printlist() << " Elemente sind in der Liste: " << endl << "------------" << endl;
    return 0;
}
