
#ifndef STAPEL_IMP_H_
#define STAPEL_IMP_H_

#include"stapel.h"

template <typename ST>
STAPEL<ST>::STAPEL()
{
	first = 0;
	count=0;
}
template <typename ST>
STAPEL<ST>::~STAPEL()
{
	;
}
template <typename ST>
void STAPEL<ST>::push(ST d)
{
	auto* newElement = new S_LISTELEM<ST>(d);
    newElement->next = this->first;
    this->first = newElement;
    this->count++;
}

template <typename ST>
ST STAPEL<ST>::pop()
{
	;
}

template <typename ST>
bool STAPEL<ST>::empty()
{
    return this->first == 0;
}
template <typename ST>

int STAPEL<ST>::number()
{
    return count;
}

#endif /* STAPEL_IMP_H_ */
