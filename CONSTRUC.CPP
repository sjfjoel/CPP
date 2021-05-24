// constructor
/*
   special member function
   it will not return anything even void
   same as class name
   can't be inheritted
*/
#include<iostream.h>
#include<conio.h>

// class
class Circle
{
	int r;
	public:
		Circle()                  // default constructor
		{
			r = 5;
		}
		Circle(float value)      // parameter constructor
		{
			this->r = value;
		}

		// member function declaration
		void area();
};

// member function definition
void Circle::area()
{
	cout<<"Area of Circle with "<<r<<" radius is "<<3.14*r*r<<endl;
}

//main function
void main()
{
	// object creation
	// constructor will be called at the time of object creaion;
	Circle c1, c2(20);  // c1 - default, c2(20) - parameter.
	clrscr();

	// member function call
	c1.area();
	c2.area();
}
