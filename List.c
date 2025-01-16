#include <stdlib.h>

#include "List.h"

Element * list_constructor() {
    Element * sentinel = (Element *) calloc(1, sizeof(Element));

    sentinel->record = NULL;
    sentinel->next = sentinel;
    sentinel->prev = sentinel;

    return sentinel;
}

void list_destructor(Element * sentinel) {
    Element * tmp_element = sentinel->next;
    while (tmp_element != sentinel) {
        Element * tmp_element_2 = tmp_element;
        tmp_element = tmp_element->next;
        element_destructor(tmp_element_2);
    }

    element_destructor(tmp_element);
}

void insert_into_list(Element * sentinel, Element * new_element) {
    sentinel->prev->next = new_element;
    new_element->prev = sentinel->prev;

    sentinel->prev = new_element;
    new_element->next = sentinel;
}

Element * linear_search(Element * start_element, int column, char searching_value[32]) {
    Element * copy_start_element = start_element;
    while (copy_start_element->record != NULL) {
        if (matched(copy_start_element->record, column, searching_value)) {
            return copy_start_element;
        }
        else {
            copy_start_element = copy_start_element->next;
        }
    }

    return NULL;
}

void delete_from_list(Element * deleting_element) {
    if (deleting_element->record == NULL) {
        return;
    }
    else {
        deleting_element->prev->next = deleting_element->next;
        deleting_element->next->prev = deleting_element->prev;
        element_destructor(deleting_element);
    }
}
