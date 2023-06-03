#include <iostream>
#include "list.h"

int main() {
    cout << "Einfach verkettete Liste:" << endl;
    LISTE list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(5);

    list.insert(4);

    cout << list.printlist() << " Elemente sind in der Liste" << endl;

    list.remove(1);
    cout << list.printlist() << " Elemente sind in der Liste" << endl;

    LISTE connectList;
    connectList.append(6);
    connectList.append(7);
    connectList.append(8);

    list.connect(connectList);
    connectList.append(9);
    cout << list.printlist() << " Elemente sind in der Liste" << endl;

    cout << "-----------------------" << endl;
    cout << "Doppelt verkettete Listen" << endl;
    D_LISTE dlist;
    dlist.insert(1);
    dlist.insert(2);
    dlist.insert(6);
    dlist.insert(3);
    dlist.printlist();
    dlist.append(7);
    dlist.append(5);
    dlist.printlist();
    dlist.remove(7);
    dlist.printlist();
    dlist.reverse_printlist();
    D_LISTE l2;
    l2.append(9);
    l2.append(10);
    dlist.connect(l2);
    dlist.printlist();
    return 0;
}
