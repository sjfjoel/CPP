// Inheritance - Virtual destructors
/*
     when a pointer object of base class is assigned to the derived class
     it will not excute the derived class destructor
     BCC -> DCC -> BCD.
     after using vitual keyword in destructor of base class
     BCC -> DCC -> DCD -> BCD.
*/

#include<iostream.h>
#include<conio.h>

// class
// base class
class Base
{
	public:
		// base class constructor
		Base()
		{
			cout<<"Base class constructor"<<endl;
		}
		// base class destructor
		virtual ~Base()  // virtual destructor is used to invoke the derived class destructor
		{
			cout<<"Base class destructor"<<endl;
		}
};
// derived class of Base
class Derived : public Base
{
	public:
		// derived class constructor
		Derived()
		{
			cout<<"Derived class constructor"<<endl;
		}
		// derived class destructor
		~Derived()
		{
			cout<<"Derived class destructor"<<endl;
		}
};

// main()
int main()
{
	clrscr();
	// object creation of base using pointer and assigned to derived class
	Base *b = new Derived;
	delete b;
}