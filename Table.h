#include "List.h"
#include "Node.h"
#include "ResultList.h"

#ifndef DSA_PROJECT_TABLE_H
#define DSA_PROJECT_TABLE_H

struct template_4 {
    char table_name[32];
    int number_of_records;
    Element * list;
    Node * tree;
};
typedef struct template_4 Table;

Table * table_constructor(char [32]);
void table_destructor(Table *);

void add_new_record(Table *, unsigned int [3],  char [4][32]);
void update_records(Table *, int, char [32], char [32]);
void delete_records(Table *, int, char [32]);

Result * select_records(Table *, int, char [32], bool);

/* Element * tree_search_student_number(Table *, int); */



#endif //DSA_PROJECT_TABLE_H
