

#include "ResultList.h"

Result * result_constructor(Record * record) {
    Result * new_result = (Result *) calloc(1, sizeof(Result));
    new_result->record = record;
    new_result->next = NULL;
    new_result->prev = NULL;
}
