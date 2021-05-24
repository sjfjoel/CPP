// declare object as array

#include<iostream.h>
#include<conio.h>

// class
class Student
{
	int id;
	char name[20];

	public:
		// member function declaration
		void getData();
		void showData();
};

// member function definition
void Student::getData()
{
	cout<<"Enter id : "; cin>>id;
	cout<<"Enter name : "; cin>>name;
}
void Student::showData()
{
	cout<<id<<"\t"<<name<<endl;
}

// main function
void main()
{
	// object creation
	Student s[30];
	int n,i;
	clrscr();
	cout<<"Student statment"<<endl;
	cout<<"Enter number of students to entry : "; cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"Student "<<i+1<<" : "<<endl;
		// member function calling
		s[i].getData();
	}
	cout<<endl<<"Entered student details"<<endl;
	cout<<endl<<"Id \t Name"<<endl;
	for(i=0; i<n; i++)
	{
		// member function calling
		s[i].showData();
	}
}