
#include"list.h"

LISTELEM::LISTELEM()
{
	ID=0;
	next = 0;
}

LISTE::LISTE()
{
	head = new LISTELEM;
	tail = new LISTELEM;
	head->next = tail;
	tail->next = tail;
}
LISTE::~LISTE()
{
;
}
void LISTE::append(int ID)
{
	LISTELEM *such, *neu;
	
	such = head;

	neu = new LISTELEM;
	neu-> ID = ID;

	while(such->next!= such->next->next)
	{
		such = such->next;
		count++;
	}
	such->next = neu;
	neu->next = tail;

	return;
}

void LISTE::insert(int ID)
{
;
}

void LISTE::connect(const LISTE &liste2)
{
;
}
void LISTE::remove(int ID)
{
;
}

int LISTE::printlist()
{
;
}


