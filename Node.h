#include <stdbool.h>

#include "Record.h"

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

#endif //DSA_PROJECT_NODE_H
