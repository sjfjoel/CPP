// Class with member function

#include<iostream.h>
#include<conio.h>
// class
class student
{
  int id;
  char name[20];

  public:
    void read();
    void print();
};

//member function defintion
void student::read()
{
	cout<<"Enter the id : "; cin>>id;
	cout<<"Enter the name : "; cin>>name;
}
void student::print()
{
	cout<<"Id is : "<<id<<endl;
	cout<<"Name is : " <<name;
}

// main function
void main()
{
	// object creation for the class student
	student s;

	clrscr();

	// function call
	s.read();
	s.print();
}
