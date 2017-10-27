#ifndef __MYWRAPPER_H
#define __MYWRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Student Student;

Student* newStudent();

void ShowData(Student* v);


#ifdef __cplusplus
}
#endif
