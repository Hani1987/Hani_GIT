class Student
{
	int i_Id;
	int s_Age;
	std::string s_Name;
	std::string s_Education;
	std::string s_Field;


	 //Constructors
public:
	Student();
	Student(int id, std::string name,  std::string educ, int age,  std::string field);
	~Student();

	//Methods
	void ShowData();
	void CalculateAverage();
	void RegisterData();
};

