#include <stdlib.h>

#include "Element.h"

Element * element_constructor(unsigned int integer_values[3],  char string_values[4][32]) {
    Element * new_element = (Element *) calloc(1, sizeof(Element));

    new_element->record = record_constructor(integer_values, string_values);
    new_element->next = NULL;
    new_element->next = NULL;

    return new_element;
}

void element_destructor(Element * deleting_element) {
    record_destructor(deleting_element->record);
    free(deleting_element);
}
