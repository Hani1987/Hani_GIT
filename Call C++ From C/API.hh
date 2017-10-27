class Student
{
	int i_Id;
	int s_Age;
	char s_Name[];
	char s_Education[];
	char s_Field[];


	 //Constructors
public:
	Student();
	Student(int id, char name[],  char educ[], int age,  char field[]);
	Student(int id);
	~Student();

	//Methods
	void ShowData();
	void CalculateAverage();
	void RegisterData();
};

