#include "Record.h"

#ifndef DSA_PROJECT_ELEMENT_H
#define DSA_PROJECT_ELEMENT_H

struct template_2 {
    Record * record;
    struct template_2 * next;
    struct template_2 * prev;
};
typedef struct template_2 Element;

Element * element_constructor(unsigned int [3],  char [4][32]);
void element_destructor(Element *);

#endif //DSA_PROJECT_ELEMENT_H
