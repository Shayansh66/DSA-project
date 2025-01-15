

#ifndef DSA_PROJECT_INTERFACE_H
#define DSA_PROJECT_INTERFACE_H

int column_detector(char *);
void query_parser(char [], char [], char [32], unsigned int [3], char [4][32], char [32], bool);

void create_table(char []);
void delete_table(char []);
void add(char []);
void update(char []);
void delete(char []);
void select(char []);

#endif //DSA_PROJECT_INTERFACE_H
