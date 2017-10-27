#include "Wrapper.h"
#include "iostream"
#include <stdio.h>

using namespace std;

int main()
{
  cout << "\tTEST C++ Function From C" << endl;

  int num = 99;

  CTest *test(CTest);

  ShowData(test);

  return 0;

}

