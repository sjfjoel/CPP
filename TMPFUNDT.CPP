// Template or generics of different type of data
#include<iostream.h>
#include<conio.h>

// template function

template <class t1, class t2>
float sum(t1 a, t2 b)
{
	return(a+b);
}

// main()
int main()
{
	clrscr();

	cout<<"Integer + Integer : "<<sum(11, 100)<<endl;
	cout<<"Integer + Float : "<<sum(1, 1.5)<<endl;
	cout<<"Float + Integer : "<<sum(10, 25.6)<<endl;
	cout<<"Float + Float : "<<sum(55.9, 32.8)<<endl;

	return 0;
}
