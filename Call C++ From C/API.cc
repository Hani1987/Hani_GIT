#include <iostream>
#include <string>
#include "API.hh"

using namespace std;


Student::Student(int id, char name[],  char educ[], int age,  char field[])
{
	this->i_Id = id;
	this->s_Name = name;
	this->s_Education = educ;
	this->s_Age = age;
	this->s_Field = field;
};

Student::Student(int id)
{
	this->i_Id = id;
	this->s_Name = "Empty";
	this->s_Education  = "Empty";
	this->s_Age = "Empty";
	this->s_Field  = "Empty";
};

void Student::ShowData()
{
  cout << "\n\tStudent ID: " << this->i_Id <<endl;
  cout << "\tStudent Name: " << this->s_Name << endl;
  cout << "\tStudent Education: " << this->s_Education << endl;
  cout << "\tStudent Age: " << this->s_Age << endl;
  cout << "\tStudent Field: " << this->s_Field << endl;
}

Student::~Student() { cout << "\n\tObject Destructed!!" << endl; };
