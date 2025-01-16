#include <stdbool.h>

#include "Record.h"
#include "Table.h"

#ifndef DSA_PROJECT_NODE_H
#define DSA_PROJECT_NODE_H

struct template_6 {
    Record * record;
    bool is_black;      // color of node
    struct template_6 * parent;
    struct template_6 * left_child;
    struct template_6 * right_child;
};
typedef struct template_6 Node;

Node * node_constructor(Element *);

void toggle_color(Node *);
void change_to_this_color(Node *, bool);

void put_as_parent(Node *, Node *, bool);
void put_as_left_child(Node *, Node *);
void put_as_right_child(Node *, Node *);

#endif //DSA_PROJECT_NODE_H
