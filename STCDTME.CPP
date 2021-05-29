// Static data member
/*
    declared inside the class
    static int a;

    defined outside of the class
    return_type  classname :: a [=10];

    accessing ways
    can be accessed using member function normally
    can be accessed using class name directly in main()
	class_name :: var_name = 111;   cout << class_name :: var_name;
*/

#include<iostream.h>
#include<conio.h>

// class
class staticMem
{
	public:
		static data member declaration
		static int a;

		void show()
		{
			cout<<endl<<a<<" is the value";
		}
};

// static member definition
int staticMem :: a = 11;

// main function
int main()
{
	clrscr();
	// accesing directly using class name
	//staticMem :: a = 50;
	cout<<"A in main : "<< staticMem :: a <<endl;

	// object creation
	staticMem sm1;

	// member function calling
	sm1.show();

	return 0;
}