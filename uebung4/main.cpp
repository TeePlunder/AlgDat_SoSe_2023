#include <iostream>
#include "list.h"

int main() {
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
    return 0;
}
