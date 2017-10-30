#ifndef __MYWRAPPER_H
#define __MYWRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Student Student;

void newStudent(int a, char* name, char* educ, int age, char* fild);

void ShowData(Student* v);


#ifdef __cplusplus
}
#endif
#endif
