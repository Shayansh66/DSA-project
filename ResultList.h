#include <stdlib.h>

#include "Record.h"

#ifndef DSA_PROJECT_RESULTLIST_H
#define DSA_PROJECT_RESULTLIST_H

struct template_7 {
    Record * record;
    struct template_7 * next;
    struct template_7 * prev;
};
typedef struct template_7 Result;

Result * result_constructor(Record *);

#endif //DSA_PROJECT_RESULTLIST_H
