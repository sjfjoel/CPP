// this pointer
/*
   used to know the current object address
   returns the address in hexa decimal format
   only member functions can have "this", friend functions cant have.
   also used to distigush the data members / member functions args

*/

#include<iostream.h>
#include<conio.h>

//class definition
class This
{
	int a, b;
	public:
		// member function declaration
		void address();
};

// member function defintion
void This::address()
{
	a = 10;
	b = 20;
	cout<<"Address of object : "<<this<<endl; // address of object
	cout<<"Value of a      : "<<this->a<<endl; // value of a in current object
	cout<<"Value of b      : "<<this->b;
}

// main function
void main()
{
	// object creation
	This t;
	clrscr();

	t.address();
	getch();
