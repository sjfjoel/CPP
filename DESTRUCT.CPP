// destructor
/*
   no parameter overloading
   no return including void
*/

#include<iostream.h>
#include<conio.h>

// class
class Destruct
{
	int a, b;

	public:
		// constructor
		Destruct()
		{
			a = 100;
			b = 200;
		}
		// destructor
		~Destruct()
		{
			cout<<"A is "<<a<<endl;
			cout<<"B is "<<b<<endl;
		}

};

// main function
void main()
{
	// object creation
	Destruct d; // const and dest are invoked automatically when the object is created.
	clrscr();
}