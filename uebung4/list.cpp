
#include"list.h"

LISTELEM::LISTELEM() {
    ID = 0;
    next = 0;
}

LISTE::LISTE() {
    head = new LISTELEM;
    tail = new LISTELEM;
    head->next = tail;
    tail->next = tail;
}

LISTE::~LISTE() {
    LISTELEM *current = head;
    while (current->next != current->next->next) {
        LISTELEM *toDelete = current->next;
        current->next = current->next->next;
        delete toDelete;
    }
    delete head;
    delete tail;
}

void LISTE::append(int ID) {
    LISTELEM *such, *neu;

    such = head;

    neu = new LISTELEM;
    neu->ID = ID;

    while (such->next != such->next->next) {
        such = such->next;
    }
    such->next = neu;
    neu->next = tail;
}

void LISTE::insert(int ID) {
    LISTELEM *current = head;
    auto *neu = new LISTELEM();
    neu->ID = ID;

    while (current->next != current->next->next && current->next->ID < ID) {
        current = current->next;
    }

    neu->next = current->next;
    current->next = neu;
}

void LISTE::connect(const LISTE &liste2) {
    LISTELEM *current = head;

    while (current->next != current->next->next) {
        current = current->next;
    }

    LISTELEM *l2Current = liste2.head->next;
    while (l2Current != l2Current->next) {
        auto neu = new LISTELEM();
        neu->ID = l2Current->ID;
        neu->next = current->next;

        current->next = neu;
        current = current->next;
        l2Current = l2Current->next;

    }
}

void LISTE::remove(int ID) {
    LISTELEM *current = head;
    LISTELEM *toDelete;

    while (current->next != current->next->next) {
        if (current->next->ID != ID) {
            current = current->next;
        } else {
            toDelete = current->next;
            current->next = current->next->next;
            delete toDelete;
            cout << "Element " << ID << " wurde entfernt" << endl;
            break;
        }
    }
}

int LISTE::printlist() {
    LISTELEM *current = head;

    cout << "Listenelemente: ";
    int count = 0;
    while (current->next != current->next->next) {
        cout << "(ID: " << current->next->ID << ", next: " << current->next->next->ID << ")";
        current = current->next;
        count++;
    }
    cout << endl;
    return count;
}


