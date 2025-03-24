#include "Table.h"

#ifndef DSA_PROJECT_DATABASE_H
#define DSA_PROJECT_DATABASE_H

struct template_5 {
     Table * table;
     struct template_5 * next;
};
typedef struct template_5 container;

container * data_base[11];

int hash_function(char [32]);
void new_table(char [32]);
Table * linear_table_search(container *, char [32]);
Table * search_table(char [32]);
void delete_table(char [32]);


#endif //DSA_PROJECT_DATABASE_H
