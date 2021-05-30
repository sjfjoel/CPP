// Inheritence - Hybrid
/*
      base

     derived    base     // in this example, single and multiple inheritance are used.

	  derived
*/

#include<iostream.h>
#include<conio.h>

// class
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

// derived class of student and base class of Result //so it is intermediate base class
class Marks : public Student
{
	protected:      // protected member is available for the present class and immediate derived class
		int subject[5], i;
	public:
		// member function declaration
		void readMarks();
		void showMarks();
};

// another base class
class Sports
{
	protected:
		int sportsMark;
	public:
		// member function
		void readSportsMark();
};

// derived class of Marks and Sports
class Result : public Marks, public Sports
{
	int total;
	float average;
	public:
		void result();
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
// of Sports class
void Sports :: readSportsMark()
{
	cout<<"Enter sports mark : "; cin>>sportsMark;
}
// of Result class
void Result :: result()
{
	total = 0;
	for(i=0; i<5; i++)
	{
		total = total + subject[i];
	}
	cout<<"Total marks : "<<total<<endl;
	average = total / 5.0;
	cout<<"Average marks : "<<average<<endl;
	cout<<"Average + Sports : "<<average+sportsMark<<endl;
}

// main()
int main()
{
	clrscr();
	cout<<"Hybrid Inhertance with Student Details"<<endl;
	// Object creation
	Result r;
	// member function calling
	r.readDetails();    // mem of base
	r.readMarks();      // mem of derived or intermediate base
	r.readSportsMark(); // mem of another base

	r.showDetails();    // mem of base
	r.showMarks();      // mem of derived or intermediate base

	r.result();         // mem of derived

	return 0;
}