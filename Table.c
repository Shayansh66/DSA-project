#include <stdlib.h>
#include <string.h>

#include "Table.h"

Table * table_constructor(char table_name[32]) {

    Table * new_table = calloc(1, sizeof(Table));
    strcpy(new_table->table_name, table_name);
    new_table->number_of_records = 0;
    new_table->list = list_constructor();
    new_table->tree = NULL;

    return new_table;
}

void table_destructor(Table * table) {
    list_destructor(table->list);
    /* destruct the tree */

    free(table);
}

void add_new_record(Table * table, unsigned int integer_values[3],  char string_values[4][32]) {
    Element * new_record = element_constructor(integer_values, string_values);
    insert_into_list(table->list, new_record);

    /* add to tree */
}


void update_records(Table * table, int column, char searching_value[32], char new_value[32]) {
    if (column == 1) {
        ;
    }
    else {
        Element * tmp_element = table->list;
        do {
            tmp_element = linear_search(tmp_element, column, searching_value);
            if (tmp_element == NULL)
                break;

            record_update(tmp_element->record, column, new_value);
        } while (1);
    }
}

void delete_records(Table * table, int column, char searching_value[32]) {
    Element * tmp_element = table->list;
    do {
        tmp_element = linear_search(tmp_element, column, searching_value);
        if (tmp_element == NULL)
            break;

        Element * deleting_element = tmp_element;
        tmp_element = tmp_element->prev;

        delete_from_list(deleting_element);
        element_destructor(deleting_element);
    } while (1);

    /* rebuild tree */
}
