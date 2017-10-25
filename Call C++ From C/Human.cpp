/*
 * Human.cpp
 *
 *  Created on: 25.10.2017
 *      Author: Hani
 */
#include <iostream>
#include "Human.h"

using namespace std;

class Human::Human{
public:
	int i_Id;
    string s_Name;
    string s_Age;
};

class Student: public Human
{

public:
	string s_Education;
	string s_Field;

	Student();
	Student(int id, string name, string educ, string age, string field);

	~Student();
	void ShowData();

};

Student::Student(int id, string name, string educ, string age, string field)
{
	this->i_Id = id;
	this->s_Name = name;
	this->s_Education = educ;
	this->s_Age = age;
	this->s_Field = field;
};

void Student::ShowData()
{
    cout << " Student ID: " << this->i_Id << endl;
	cout << " Student Name: " << this->s_Name << endl;
	cout << " Student Education: " << this->s_Education<< endl;
	cout << " Student Age: " << this->s_Age << endl;
    cout << " Student Field: " << this->s_Field<< endl;
}

Student::~Student(){};
