// Function template
/*
    Function template is designed to create a template for function
    using that we can create family of functions
*/
#include<iostream.h>
#include<conio.h>
// same type of argument
template <class t>
t add(t a, t b)
{
	return (a+b);
}


// main()
int main()
{
	clrscr();

	cout<<"Int Addition : "<<add(5,4)<<endl;
	cout<<"Float Addition : "<<add(5.6,4.1)<<endl;

	return 0;
}