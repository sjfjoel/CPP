// operator overloading (unary) - ++, --.

#include<iostream.h>
#include<conio.h>

// class
class OpOl
{
	int number;
	public:
		// constructor
		OpOl()       // default constructor
		{
			number = 0;
		}
		// member function definition
		void read()
		{
			cout<<"Enter any number : "; cin>>number;
		}
		void show()
		{
			cout<<"Number is "<<number<<endl;
		}

		// operator overloading
		void operator ++ ()
		{
			cout<<"Number is incremented"<<endl;
			number++;
			cout<<"Number is "<<number<<endl;
		}
		void operator -- ()
		{
			cout<<"Number is decremented"<<endl;
			number--;
			cout<<"Number is "<<number<<endl;
		}
};

// main function
int main()
{
	clrscr();

	// object creation
	OpOl oo;

	oo.show();

	//  member function calling
	oo.read();
	oo.show();

	// operator overloading
	oo++;
	oo--;

	return 0;
}