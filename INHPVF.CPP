// pure virtual function - do nothing function
/*
     Abstract class:
	A class having pure virtual function,
	Only for inheritance concept,
	Object can't be created for abstract class.
     Pure virtual function:
	Pure virtual function is declared in abstract class.
	later it will be redefined in derived class.
	Get the run time polymarphism.
*/

#include<iostream.h>
#include<conio.h>

// class
// abstract base class
class Shape
{       protected:
		int b, h;
	public:
		void requirements()
		{
			cout<<"Enter Value : "; cin>>b;
			cout<<"Enter Value : "; cin>>h;
		}
		// pure virtual function
		virtual float area() = 0;
};
// derived class of Area
class Triangle : public Shape
{
	public:
		float area()
		{
			return (0.5*b*h);
		}
};
// derived class of Area
class Rectangle : public Shape
{
	public:
		float area()
		{
			return (b*h);
		}
};

// main()
int main()
{
	clrscr();

	cout<<"Area calculation"<<endl;

	cout<<endl<<"Area of triangle : "<<endl<<endl;
	// object creation for triangle
	Triangle t;

	// member function calling
	t.requirements();    // abstract class member
	cout<<"Area of triangle : "<<t.area()<<endl;

	cout<<endl<<"Area of rectangle : "<<endl<<endl;
	// object creation for rectangle
	Rectangle r;

	// member function calling
	r.requirements();    // abstract class member
	cout<<"Area of rectangle : "<<r.area()<<endl;

	return 0;
}