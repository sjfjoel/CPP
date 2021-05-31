//template class

#include<iostream.h>
#include<conio.h>

// class
template <class t>
class Template
{
	t a, b;
	public:
		void get()
		{
			cin>>a>>b;
		}
		t sum(); // declaration of mem fun in template class
};
// definition of template class mem fun
template <class t>
t Template <t> :: sum()
{
	return a+b;
}

// main()
int main()
{
	clrscr();

	// object creation for template class
	Template <int> t1;
	Template <float> t2;

	cout<<"Enter two integers"<<endl;
	t1.get();
	cout<<"Sum of two integers : "<<t1.sum()<<endl<<endl;

	cout<<"Enter two floats"<<endl;
	t2.get();
	cout<<"Sum of two floats : "<<t2.sum()<<endl;

	return 0;
}