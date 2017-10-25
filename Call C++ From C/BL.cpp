#include <iostream>
#include <string>
#include "FUNCTION_HEADER.h"

using namespace std;

class Human
{

protected:
	int i_Id;
	string s_Name;
	int s_Age;
};

class Student: Human
{

public:
	string s_Education;
	string s_Field;


	Student();
	Student(int id, string name, string educ, int age, string field);

	~Student();
	void ShowData();
};


Student::Student(int id, string name, string educ, int age, string field)
{
	this->i_Id = id;
	this->s_Name = name;
	this->s_Education = educ;
	this->s_Age = age;
	this->s_Field = field;
};


void Student::ShowData()
{
  cout << "\tStudent ID: " << this->i_Id <<endl;
  cout << "\tStudent Name: " << this->s_Name <<endl;
  cout << "\tStudent Education: " << this->s_Education <<endl;
  cout << "\tStudent Age: " << this->s_Age <<endl;
  cout << "\tStudent Field: " << this->s_Field <<endl;
}

Student::~Student(){ cout <<"\n\tObject is Destructed"<<endl; };


int main()
{
  Student hani(35464, "Object Name", "Object Education", 325, "Object Field");
  hani.ShowData();
  calculate(2.75, 3.15);

   return 0;
}

extern FUNCTION_HEADER void calculate(float num1, float num2)
 {
   cout<<"\t\n  Overrided Old C Function= "<< num1 + num2 <<endl;
 }

