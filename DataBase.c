#include <stdlib.h>
#include <string.h>

#include "DataBase.h"

int hash_function(char table_name[32]) {
    int sum_of_digits = 0;

    char * p = table_name;
    while (p != 0) {
        sum_of_digits += *p;
        p++;
    }

    return sum_of_digits % 11;
}

void new_table(char table_name[32]) {
    Table * new_table = table_constructor(table_name);
    container * new_container = (container *) calloc(1, sizeof(container));
    new_container->table = new_table;

    int index = hash_function(table_name);
    new_container->next = data_base[index];
    data_base[index] = new_container;
}

Table * linear_table_search(container * tables_row, char table_name[32]) {
    container * linked_list = tables_row;
    while (linked_list != NULL && strcmp(linked_list->table->table_name, table_name) != 0) {
        linked_list = linked_list->next;
    }
    return linked_list;
}

Table * search_table(char table_name[32]) {
    int index = hash_function(table_name);
    return linear_table_search(data_base[index], table_name);
}
