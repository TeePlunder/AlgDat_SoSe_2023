
#ifndef LIST_H_
#define LIST_H_

#include<iostream>

using namespace std;

class LISTELEM
{
    friend class LISTE;
private: int ID;
         LISTELEM *next;
public: LISTELEM();
};

class LISTE
{
private: LISTELEM *head;
	 LISTELEM *tail;
public:	LISTE();
        ~LISTE();
        void append(int ID);  //Element ans Ende anhaengen
        void insert(int ID);  //sortiertes Einfuegen
        void remove(int ID); //Element entfernen
        void connect(const LISTE &liste2);//Liste2 wird angegaengt
        int printlist();     //Ausgabe aller Listenelemente
};



//////////////////////////////////////////////////////////////////
//Listenelement einer doppelt verketteten Liste
class D_LISTELEM
{
	friend class D_LISTE;
private: int ID;
        D_LISTELEM *next;
        D_LISTELEM *prev;
public: D_LISTELEM();
};

class D_LISTE
{
private: D_LISTELEM *head;
         D_LISTELEM *tail;
public:	D_LISTE();
        ~D_LISTE();
        void insert(int ID);  //sortiertes Einfuegen
        int printlist();
        int reverse_printlist();//Elemente rueckwaerts ausgeben
};
#endif
