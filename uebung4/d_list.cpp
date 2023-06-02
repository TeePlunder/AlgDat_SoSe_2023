/*
 * d_list.cpp
 *
 *  Created on: 23.03.2013
 *      Author: weigert
 */
#include "list.h"
using namespace std;

D_LISTELEM::D_LISTELEM()
{
	ID=0;
	next = 0;
	prev = 0;
}
D_LISTE::D_LISTE()
{
	head = new D_LISTELEM;
	tail = new D_LISTELEM;
	head->prev = head;
	head->next = tail;
	tail->prev = head;
	tail->next = tail;
}

D_LISTE::~D_LISTE()
{
  ;
}

void D_LISTE::insert(int ID)
{
  ;
}


int D_LISTE::printlist() {
    D_LISTELEM *current = head;

    cout << "Listenelemente: ";
    int count = 0;
    while (current->next != current->next->next) {
        cout << current->next->ID << " ";
        current = current->next;
        count++;
    }
    cout << endl;
    return count;
}
int D_LISTE::reverse_printlist()
{
  ;
}
