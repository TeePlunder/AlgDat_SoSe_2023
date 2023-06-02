
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
    ;
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

    return;
}

void LISTE::insert(int ID) {
    LISTELEM *such, *neu;


}

void LISTE::connect(const LISTE &liste2) {
    ;
}

void LISTE::remove(int ID) {
    LISTELEM *current = head;
    LISTELEM *prev = nullptr;

    while (current != nullptr && current->ID != ID) {
        prev = current;
        current = current->next;
    }

    if (current == nullptr) {
        cout << "Das Element " << ID << " Konnte nicht gefunden werden" << endl;
        return;
    }

    // fist element in list
    if (prev == nullptr) {
        head = current->next;
        if (current == tail) {
            tail = nullptr;
        }
    } else {
        prev->next = current->next;
        if (current == tail) {
            tail = prev;
        }
    }

    delete current;
    cout << "Element mit der ID " << ID << " wurde entfernt" << endl;
}

int LISTE::printlist() {
    if (head == nullptr) {
        cout << "die Liste ist leer" << endl;
        return 0;
    }
    LISTELEM *current = head;

    cout << "Listenelemente: ";
    int count = 0;
    while (current != current->next->next) {
        cout << current->ID << " ";
        current = current->next;
        count++;
    }
    cout << endl;
    return count;
}


