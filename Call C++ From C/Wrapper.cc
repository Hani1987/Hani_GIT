#include "Wrapper.h"
#include "API.hh"
#include <string>

using namespace std;

extern "C" {
        void newStudent(int a, char* name, char* educ, int age, char* fild) {
           Student* student = new Student(a, string(name), string(educ), age, string(fild));
           student->showData();
           delete student;
           student = NULL;
        }
        //void ShowData(newStudent* v) {}
}
