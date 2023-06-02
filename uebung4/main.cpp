#include <iostream>
#include "list.h"

int main() {
    LISTE list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(5);

    list.insert(4);

    list.printlist();

    list.remove(1);
    list.printlist();

    return 0;
}
