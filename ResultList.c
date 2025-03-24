#include <stdio.h>
#include <stdlib.h>

#include "ResultList.h"

Result * result_constructor(Record * record) {
    Result * new_result = (Result *) calloc(1, sizeof(Result));
    new_result->record = record;
    new_result->next = NULL;
    new_result->prev = NULL;
}

void result_destructor(Result * deleting_result) {
    free(deleting_result);
}

void new_found_record(Result ** results, Record * found_record) {
    Result * new_result = result_constructor(found_record);
    new_result->next = *results;
    (*results)->prev = new_result;
    results = &new_result;
}

bool result_compare(Result * first_result, Result * second_result) {
    return record_compare_student_number(first_result->record, second_result->record);
}

Result * merge(Result * list_1, Result * list_2) {
    Result * merged, * pointer = NULL;
    // we assume none of lists are NULL
    merged = result_compare(list_1, list_2) ? list_1 : list_2;
    merged->prev = NULL;

    while (list_1 != NULL || list_2 != NULL) {
        if (list_1 == NULL) {
            pointer->next = list_2;
            pointer = pointer->next;
            list_2 = list_2->next
        }
        else if (list_2 == NULL) {
            pointer->next = list_1;
            pointer = pointer->next;
            list_1 = list_1->next
        }
        else {
            if (result_compare(list_1, list_2)) {
                pointer->next = list_1;
                pointer = pointer->next;
                list_1 = list_1->next
            }
            else {
                pointer->next = list_2;
                pointer = pointer->next;
                list_2 = list_2->next
            }
        }
    }
    pointer->next = NULL;
}

Result * sort_results(Result * results, int number_of_results) {
    if (number_of_results == 0 || number_of_results == 1) {
        return results;
    }
    else if (results == NULL) {
        return results;
    }
    else {
        int size = number_of_results / 2;
        Result *left_part = results, *right_part = results;
        for (int i = 0; i < size; i++)
            right_part = right_part->next;

        left_part = sort_results(left_part, size);
        right_part = sort_results(right_part, number_of_results - size);

        return merge(left_part, right_part);
    }
}

void print_result(Result * result) {
    printf("%d\t|%s\t|%s\t|%d\t|%s\t|%s\t|%d\n",
           result->record->student_number,
           result->record->general_course_name,
           result->record->general_course_instructor,
           result->record->general_course_score,
           result->record->core_course_name,
           result->record->core_course_instructor,
           result->record->core_course_score
    )
}

void print_results(Result * results) {
    printf("Student Number\t|General Course Name\t|General Course Instructor\t|General Course Score\t|Core Course Name\t|Core Course Instructor\t|Core Course Score\n\n");
    while (results != NULL) {
        print_result(results);
        Result * deleting_result = results;
        results = results->next;
        result_destructor(deleting_result);
    }
    printf("\n\n");
}
