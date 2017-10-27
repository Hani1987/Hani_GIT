#ifndef WRAPPER_H_
#define WRAPPER_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CPPClass CPPClass;

CPPClass* CPPClass_new();
void CPPClass_do_something(CPPClass* cppclass);
int CPPClass_get_state(CPPClass* cppclass);
void CPPClass_delete(CPPClass* cppclass);

#ifdef __cplusplus
}
#endif
#endif /* WRAPPER_H_ */
