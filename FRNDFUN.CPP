// friend function
/*
   Special Member function.
   must be declared inside the class(with friend keyword).
   must be defined outside the class(without friend keyword).
   can be declared in multiple class.
   object as parameter(can be called like normal function).
*/

#include<iostream.h>
#include<conio.h>

// class
class Friend
{
	int a, b;
	// friend function declaration
	friend void show(Friend); // class type arg(object)
};

// friend function definition
void show(Friend obj)
{
	obj.a = 11;
	obj.b = 22;
	cout<<obj.a<<"\t"<<obj.b<<endl;
}

// main()
void main()
{
	// Object creation
	Friend f1;

	clrscr();

	// friend function calling
	show(f1);
}