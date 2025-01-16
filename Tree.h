#include <stdlib.h>

#include "Node.h"

#ifndef DSA_PROJECT_TREE_H
#define DSA_PROJECT_TREE_H

Node * NIL;

void trance_plant(Node *, Node *);
void left_rotation(Node *);
void right_rotation(Node *);

void insert_new_node(Node *, Node *);
void insertion_fixup();

Node * build_tree(Table *);

Element * search_by_student_number(Table *, unsigned int);

#endif //DSA_PROJECT_TREE_H
