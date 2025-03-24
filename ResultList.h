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
void result_destructor(Result *);

void new_found_record(Result **, Record *);
Result * sort_results(Result *, int);
void print_results(Result *);

#endif //DSA_PROJECT_RESULTLIST_H
