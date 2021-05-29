// constant data member
/*
   called as accessor,
   because we can only access the constant member function,
   we cant change or modify the data.

   void fun_name() const{}
*/

#include<iostream.h>
#include<conio.h>

// class
class GetVal
{
	int a, b;

	public:
		// member function;
		void read()
		{
			cout<<"Enter the value for A : "; cin>>a;
			cout<<"Enter the value for B : "; cin>>b;
		}
		// const member function
		void show() const
		{
			//a = 50;  cant modify const fun()
			//b = 50;
			cout<<endl<<"A is "<<a<<"\t B is "<<b<<endl;
		}
};

// main()
int main()
{
	clrscr();

	// object creation
	GetVal gv;

	// member function calling
	gv.read();
	gv.show();

	return 0;
}