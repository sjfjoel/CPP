// Default constructor in inheritance
/*
	when the object is created for derived class
	1st base class constuctor is invoked
	after that derived class constructor will be invoked
*/

#include<iostream.h>
#include<conio.h>

// classe
class Base      // base class
{
	public:
	// default constructor
	Base()
	{
		cout<<"when object creation of derived class,\n\nBase class default constructor is invoked first."<<endl;
	}
};
class Derived : public Base    // derived class of Base
{
	public:
	// default constructor
	Derived()
	{
		cout<<"\nThen, Derived class default constructor will be invoked"<<endl;
	}
};

// main()
int main()
{
	clrscr();

	// object creation of derived class
	Derived d;

	return 0;
}