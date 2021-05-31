// Local class
/*
	A class defined inside a function
	Must be defined inside a function
	can't be defined outside of the function
	objects can be created only inside the function
	member function calling only inside the function
*/

#include<iostream.h>
#include<conio.h>
int number = 111;
void function()
{
	// local class definition
	class Local
	{
		int number;
		public:
			// member function
			void readData()
			{
				cout<<"Enter any number : "; cin>>number;
			}
			void showData()
			{
				cout<<"Entered number is "<<number<<endl;
				cout<<"Global number is "<<::number<<endl;
			}
	};

	// local class' object creation
	Local l;

	// local class' member function calling
	l.readData();
	l.showData();

}

// main()
int main()
{
	clrscr();

	// function call
	function();

	return 0;
}