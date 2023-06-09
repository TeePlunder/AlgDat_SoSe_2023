#ifndef STAPEL_H_
#define STAPEL_H_

template <typename ST>
class S_LISTELEM
	{
       template <typename> friend class STAPEL; //STAPEL darf auf private zugreifen
       private: ST daten;
	            S_LISTELEM<ST> *next;
	   public: S_LISTELEM<ST>(ST dat){daten = dat; next=0;}
	};

template <typename ST>
class STAPEL
{

private: S_LISTELEM<ST> *first;
	       int count;
public: STAPEL();
		~STAPEL();
		void push(ST d);
		ST pop();
		bool empty();
		int number();
};


#endif /* STAPEL_H_ */
