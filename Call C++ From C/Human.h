#ifndef HUMAN_H_
#define HUMAN_H_

class Human {

};

class Student: Human {
public:
	Student();
	Student(int id, std::string name, std::string educ, std::string age, std::string field);
    ~Student();
	void ShowData();
};

#endif /* HUMAN_H_ */
