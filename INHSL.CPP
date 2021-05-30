// Inheritence Single level
/*
     Process of deriving a new class from the existing class is inheritance.

     when the object is created for the derived class,
     it will allocate the memory to the data members of the class and also to the base class.

		base

	       derived

*/

#include<iostream.h>
#include<conio.h>

// classes
// Base class
class Student
{
	int id;
	char name[20];

	public:
		// member function declaration
		void readDetails();
		void showDetails();
};

// derived class(Marks) of Student
class Marks : public Student
{
	int subject[5], i;
	public:
	       // member function declaration
		void readMarks();
		void showMarks();
};

// member function definition
// of Student class
void Student :: readDetails()
{
	cout<<endl<<"Enter following student details"<<endl;
	cout<<"ID : "; cin>>id;
	cout<<"Name : "; cin>>name;
}
void Student :: showDetails()
{
	cout<<endl<<"Basic details of the student"<<endl;
	cout<<"ID : "<<id<<endl;
	cout<<"Name : "<<name<<endl;
}
// of Marks class
void Marks :: readMarks()
{
	cout<<endl<<"Enter the marks"<<endl;
	for(i=0; i<5; i++)
	{
		cout<<"Subject "<<i+1<<" : "; cin>>subject[i];
	}
}
void Marks :: showMarks()
{
	cout<<endl<<"Student marks"<<endl;
	for(i=0; i<5; i++)
	{
		cout<<"Subject "<<i+1<<" mark : "<<subject[i]<<endl;
	}
}

// main()
int main()
{
	clrscr();
	cout<<"Single-Level Inhertance with Student Details"<<endl;
	// Object creation
	Marks m;
	// member function calling
	m.readDetails();  // mem of base
	m.readMarks();    // mem of derived

	m.showDetails();  // mem of base
	m.showMarks();    // mem of derived

	return 0;
}