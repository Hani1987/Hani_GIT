/*
 * Human.cpp
 *
 *  Created on: 25.10.2017
 *      Author: Hani
 */
#include <iostream>
#include "Human.h"

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
