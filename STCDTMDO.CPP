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
class Count
{
	public:
		// static data member declaration
		static int count;

		// constructor
		Count()
		{
			count++;
			cout<< "Object "<<count<<" is constructed"<<endl;
		}

		// destructor
		~Count()
		{
			cout<< "Object "<<count<<" is destructed"<<endl;
			count--;
		}
};

// static data member definition
int Count :: count; // default static value is 0.

// main function

int main()
{
	clrscr();

	cout<<"Constructor"<<endl;

	// object creation
	Count c1, c2, c3;
	cout<<endl<<"Destructor"<<endl;

	return 0;
}