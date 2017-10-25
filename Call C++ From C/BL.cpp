#include <iostream>
#include <string>
#include "FUNCTION_HEADER.h"

using namespace std;


class Human {
protected:
	int i_Id;
	std::string s_Name;
	std::string s_Age;
};

class Student: Human {

public:
	std::string s_Education;
	std::string s_Field;
	Student();
	Student(int id, std::string name, std::string educ, std::string age, std::string field);
    ~Student();
	void ShowData();
};


int main()
{
   Student hani();
   Student Ali(135, "Name", "afsd", "sfdg", "orjwg");

   Ali.ShowData();



//**************************************************************//

   return 0;
}

extern FUNCTION_HEADER  void calculate(float num1, float num2)
 {
   cout<<"\t\nResult= "<< num1 + num2 <<endl;
 }

