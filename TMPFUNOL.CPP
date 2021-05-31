// Template function overloading

#include<iostream.h>
#include<conio.h>

template <class t>
t sum(t a, t b)
{
	return(a+b);
}

template <class t>
t sum(t a, t b, t c)
{
	return (a+b+c);
}

// main()
int main()
{
	clrscr();

	cout<<"Sum of 2 integers : "<<sum(10, 10)<<endl;
	cout<<"Sum of 2 floats   : "<<sum(10.2, 10.2)<<endl;
	cout<<"Sum of 3 integers : "<<sum(10, 10, 10)<<endl;
	cout<<"Sum of 3 floats   : "<<sum(10.5, 10.2, 10.1)<<endl;

	return 0;
}