#ifndef HUMAN_H_
#define HUMAN_H_

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

#endif /* HUMAN_H_ */
