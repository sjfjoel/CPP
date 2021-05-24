// consructor with default args

#include<iostream.h>
#include<conio.h>

// class
class DefArg
{
	int a, b, c;

	public:
		// constructor with default args
		DefArg(int x = 11, int y = 22, int z = 33)
		{
			a = x;
			b = y;
			c = z;
		}

		// member function declaration
		void show();
};

// member function definition
void DefArg::show()
{
	cout<<"A\tB\tC"<<endl;
	cout<<a<<"\t"<<b<<"\t"<<c<<endl;
}

// main()
void main()
{
	// object creation
	DefArg d1(111, 222, 333);
	DefArg d2(111, 222);
	DefArg d3(111);
	DefArg d4;

	clrscr();

	// member function call
	d1.show();
	d2.show();
	d3.show();
	d4.show();
}