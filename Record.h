#ifndef DSA_PROJECT_RECORD_H
#define DSA_PROJECT_RECORD_H

struct template_1 {
    unsigned int student_number;
    unsigned int general_course_score;
    unsigned int core_course_score;

    char general_course_name[32];
    char general_course_instructor[32];
    char core_course_name[32];
    char core_course_instructor[32];
};
typedef struct template_1 Record;

Record * record_constructor(unsigned int [3],  char [4][32]);
void record_destructor(Record *);

int matched(Record *, int, char [32]);

void record_update(Record *, int, char [32]);

#endif //DSA_PROJECT_RECORD_H
