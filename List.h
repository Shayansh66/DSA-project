#include "Element.h"

#ifndef DSA_PROJECT_LIST_H
#define DSA_PROJECT_LIST_H

Element * list_constructor();
void list_destructor(Element *);

void insert_into_list(Element *, Element *);
Element * linear_search(Element *, int, char [32]);
void delete_from_list(Element *);

#endif //DSA_PROJECT_LIST_H
