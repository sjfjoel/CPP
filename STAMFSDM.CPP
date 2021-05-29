// static member function with staic data member

#include<iostream.h>
#include<conio.h>

// class
class staticMem
{
	public:
		// static data member declaration
		static int a, b;

		// static member function
		static void readData()
		{
			cout<<"Enter a value : "; cin>>a; cout<<"Enter a value : "; cin>>b;
			cout<<endl<<"Enterd values are "<<a<<" and "<<b<<endl;
		}

};

// static data member definition
int staticMem :: a;
int staticMem :: b;

// main()
int main()
{
	clrscr();

	cout<<"Called using class"<<endl;
	// statictic member function calling using class
	staticMem :: readData();

	cout<<endl<<"Press any key..."; getch();


	cout<<endl<<endl<<"Called using object"<<endl;
	// object creation
	staticMem sm;

	// statictic member function calling using object
	sm.readData();

	return 0;
}