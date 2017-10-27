#include "wrapper.h"

class CPPClass
{
    int state;
public:
    CPPClass(): state(0) {}
    void do_something() { ++state; }
    int get_state() const { return state; }
};

extern "C" CPPClass* CPPClass_new()
{
    return new CPPClass;
}

extern "C" void CPPClass_do_something(CPPClass* cppclass)
{
    cppclass->do_something();
}

extern "C" int CPPClass_get_state(CPPClass* cppclass)
{
    return cppclass->get_state();
}

extern "C" void CPPClass_delete(CPPClass* cppclass)
{
    delete cppclass;
}
