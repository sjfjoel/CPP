// Parameterized constructor in inheritance
/*
    1. Base class must contain default constructor
    2. Base class parameterized constructor is should be invoked in derived class parameterized contstructor
    3. Base class parameterized constructor is should be first statement in derived class parameterized contstructor
    4. Only one base class parameterized constructor is called with in derived class parameterized contstructor

	syntax:  baseClass_Name :: Constructor_Name(Arg_List);
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>

// class
// base class
class Student
{
	char name[20], 	course[10];
	public:
	// default constructor
	Student()
	{
	}
	// parameterized constructor
	Student(char name[20], char course[10])
	{
		strcpy(this->name, name);
		strcpy(this->course, course);
	}

	// member function declaration
	void showStudent();
};

// derived class of Student
class Marks : public Student
{
	int math, chemistry, comScience;
	public:
	//parameterized constructor
	Marks(char name[20], char course[10], int math, int chemistry, int comScience)
	{
		// base class parameterized constructor calling
		Student :: Student(name, course);
		this->math = math;
		this->chemistry = chemistry;
		this->comScience = comScience;
	}

	// member function declarataion
	void showMarks();
};

// member function definition
// of Student class
void Student :: showStudent()
{       cout<<"Student basic details"<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Course : "<<course<<endl;
}
// of Marks class
void Marks :: showMarks()
{
	cout<<"Student Marks"<<endl
	    <<"Math             : "<<math<<endl
	    <<"Chemistry        : "<<chemistry<<endl
	    <<"Computer Science : "<<comScience<<endl;
}

// main()
int main()
{
	clrscr();

	//object creation
	Marks m("joel","CS",100,100,100); // parameterized constructor

	// member function calling
	m.showStudent();
	m.showMarks();

	return 0;
}