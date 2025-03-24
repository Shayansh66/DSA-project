#include <string.h>
#include <stdbool.h>
#include <string.h>

#include "Interface.h"
#include "DataBase.h"

void new_query(char query[]) {
    char command[32];
    char column_name[32];
    unsigned int integer_values[3];
    char string_values[4][32];

    query_parser(query, command, column_name, integer_values, string_values);
    if (strcmp(command, "CREATETABLE")) {
        new_table(string_values[0]);
    }
    else if (strcmp(command, "DELETETABLE")) {

    }
}

int column_detector(char * word) {
    if (strncmp(word, "StudentNumber", 13) == 0) {
        return 1;
    }
    else if (strncmp(word, "GeneralCourseScore", 18) == 0) {
        return 2;
    }
    else if (strncmp(word, "CoreCourseScore", 15) == 0) {
        return 3;
    }
    else if (strncmp(word, "GeneralCourseName", 17) == 0) {
        return 4;
    }
    else if (strncmp(word, "GeneralCourseInstructor", 23) == 0) {
        return 5;
    }
    else if (strncmp(word, "CoreCourseName", 14) == 0) {
        return 6;
    }
    else if (strncmp(word, "CoreCourseInstructor", 20) == 0) {
        return 7;
    }
    else {
        return 0;
    }

}

void query_parser(char input_query[], char command[], char table_name[32], unsigned int integer_values[3], char string_values[4][32], char new_value[32], bool is_sorted) {
    command = strtok(input_query, " ");
    char * tmp = strtok(NULL, " ");
    if (strcmp(tmp, "TABLE") == 0 || strcmp(tmp, "INDEX") == 0) {
        strcat(command, tmp);

        table_name = strtok(NULL, " ");
    }
    else {
        table_name = tmp;
    }



}

void create_table(char query[]) {

}
