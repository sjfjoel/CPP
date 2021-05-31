// Default destructor in inheritance
/*
	when the object is created for derived class
	1st derived class destuctor is invoked
	after that base class destructor will be invoked
*/

#include<iostream.h>
#include<conio.h>

// classe
class Base      // base class
{
	public:
	// default destructor
	~Base()
	{
		cout<<"\nThen, Base class default destructor will be invoked"<<endl;
	}
};
class Derived : public Base    // derived class of Base
{
	public:
	// default constructor
	Derived()
	{
		cout<<"when object creation of derived class,\n\nDerived class default destructor is invoked first."<<endl;
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