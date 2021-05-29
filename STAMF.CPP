// static member function
/*
	it designed to work only with static data members
	it will not work on non static data members

		syntax: static void read(int a, int b) { }.

	never assosiate with this pointer(this operator)
	it cant be const

	can be accessed directly using class name and also using objects

		class name: class_name::read(10, 20);
		object: class_name cn; cn.read(10, 30);
*/

#include<iostream.h>
#include<conio.h>

// class
class staticFun
{
	public:
		// static member function definition;
		static void memFun(int a, int b)
		{
			if(a>b)
			{
				cout<<a<<" is big"<<endl;
			}
			else if(a<b)
			{
				cout<<b<<" is big"<<endl;
			}
			else
			{
				cout<<"Both are equal"<<endl;
			}
		}
};

// main()
int main()
{
	clrscr();
	// access static member function directly using class name
	staticFun :: memFun(5, 10);
	staticFun :: memFun(11, 11);

	// access static member function using object
	// object creation
	staticFun sf1;

	// member function calling
	sf1.memFun(32, 30);


	return 0;
}