// Accessing private member function from another function outside the class
/*
   We cant access directly
   have to declare public member function inside same class,
   and call the prinvate mem fun inside the public mem fun.
*/

#include<iostream.h>
#include<conio.h>

// class
class Employee
{
	// access specifier of class is by default private
	int id;
	char name[20];
	float salary;
	void getDetails();

	// declare as public
	public:
		void displayDetails();

};

// member function definition
void Employee::getDetails()
{
	cout<<"Enter the employee details :"<<endl;
	cout<<"Id     : "; cin>>id;
	cout<<"Name   : "; cin>>name;
	cout<<"Salary : "; cin>>salary;
}
void Employee::displayDetails()
{
	// private member function calling
	getDetails();

	cout<<"Entered details are :"<<endl;
	cout<<"Id : "<<id<<ends<<"Name : "<<name<<ends<<"Salary : "<<salary;
}

// main function
void main()
{
	// object creation for class Employee
	Employee e;
	clrscr();

	// member function calling
	/* e.getDetails();  cant access this private function from here*/
	e.displayDetails();
}