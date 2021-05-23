// this pointer for member variables
// it used to differentiate the value of parameter and actual variable name when both are in same name.

#include<iostream.h>
#include<conio.h>
// class definition
class This
{
	int a, b;
	public:
		// member function declaration
		void diff(int a, int b);
	// in this class varaible and the function parameters are in the same name.
};

// member function definition
void This::diff(int a, int b)
{
	/* a = a;
	   b = b;
	   if we do like above
	   it will give he garbage value
	   because local variable has the 1st preference
	   to avoid the confution with same name, we can use this here
	*/

	this->a = a;  // or (*this).a;
	this->b = b;  // or (*this).b;

	cout<<"A is : "<<a<<endl;
	cout<<"B is : "<<b<<endl;
}

// main function
void main()
{
	// object creation
	This t;
	clrscr();

	// member function calling
	t.diff(2000,3330);
}
