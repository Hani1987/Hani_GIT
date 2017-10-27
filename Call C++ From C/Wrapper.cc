#include "Wrapper.h"

#include "API.hh"

extern "C"
{
CTest * test_new(int id) {
       Student *t = new Student(id);
       return (CTest*) t;
}

void ShowData(const CTest *test_new) {
	Student *t = (Student *)test_new;
}

void test_delete(const CTest *test) {
	Student *t = (Student *)test;
    delete t;
  }
}
