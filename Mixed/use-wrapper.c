#include <stdio.h>
#include "wrapper.h"

int main(void)
{
    CPPClass* cppclass = CPPClass_new();

    if(!cppclass)
    {
        printf("ERROR: failed to create CPPClass:\n");
        return 1;
    }

    printf("state: %d\n", CPPClass_get_state(cppclass));
    CPPClass_do_something(cppclass);
    printf("state: %d\n", CPPClass_get_state(cppclass));

    CPPClass_delete(cppclass);
}
