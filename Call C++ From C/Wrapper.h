typedef void CTest;

#ifdef __cplusplus
extern "C" {
#endif
CTest *test_new(const int id);
void ShowData(const  CTest *t);
void test_delete( const CTest *t);
#ifdef __cplusplus
}
#endif
