/*
 * d_list.cpp
 *
 *  Created on: 23.03.2013
 *      Author: weigert
 */
#include "list.h"

using namespace std;

D_LISTELEM::D_LISTELEM() {
    ID = 0;
    next = 0;
    prev = 0;
}

D_LISTE::D_LISTE() {
    head = new D_LISTELEM;
    tail = new D_LISTELEM;
    head->prev = head;
    head->next = tail;
    tail->prev = head;
    tail->next = tail;
}

D_LISTE::~D_LISTE() {
    ;
}

void D_LISTE::append(int ID) {
    D_LISTELEM *current = head;
    auto neu = new D_LISTELEM();
    neu->ID = ID;

    while (current->next != current->next->next) {
        current = current->next;
    }
    neu->prev = current;
    neu->next = tail;
    tail->prev = neu;
    current->next = neu;
}

void D_LISTE::insert(int ID) {
    D_LISTELEM *current = head;
    auto *neu = new D_LISTELEM();
    neu->ID = ID;

    while (current->next != current->next->next && current->next->ID < ID) {
        current = current->next;
    }

    neu->next = current->next;
    neu->prev = current;
    current->next->prev = neu;
    current->next = neu;
}

void D_LISTE::remove(int ID) {
    D_LISTELEM *current = head;
    D_LISTELEM *toDelete;

    while (current->next != current->next->next) {
        if (current->next->ID != ID) {
            current = current->next;
        } else {
            toDelete = current->next;
            current->next->next->prev = current;
            current->next = current->next->next;
            delete toDelete;
            cout << "Element " << ID << " wurde entfernt" << endl;
            break;
        }
    }
}

int D_LISTE::printlist() {
    D_LISTELEM *current = head;

    cout << "Listenelemente: ";
    int count = 0;
    while (current->next != current->next->next) {
        cout << "(prev: " << current->next->prev->ID << ", " << "ID: " << current->next->ID << ", " << "next: "
             << current->next->next->ID << ") ";
        current = current->next;
        count++;
    }
    cout << endl;
    return count;
}

int D_LISTE::reverse_printlist() {
    D_LISTELEM *current = tail;

    cout << "Reverse Listenelemente: ";
    int count = 0;
    while (current->prev != current->prev->prev) {
        cout << "(next: " << current->prev->next->ID << ", " << "ID: " << current->prev->ID << ", " << "prev: "
             << current->prev->prev->ID << ") ";
        current = current->prev;
        count++;
    }
    cout << endl;
    return count;
}
