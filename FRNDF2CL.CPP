// friend function with different classes

#include<iostream.h>
#include<conio.h>

// class

class ValB; // forward declaration of class

class ValA
{
	int a;
	public:
		void get()
		{
			cout<<"Enter any number : "; cin>>a;
		}
		// friend funnction declaration
		friend void large(ValA objA, ValB objB);
};
class ValB
{
	int a;
	public:
		void get()
		{
			cout<<"Enter any number : "; cin>>a;
		}
		// friend funnction declaration
		friend void large(ValA objA, ValB objB);
};

// friend funnction definition
void large(ValA objA, ValB objB)
{
	if(objA.a>objB.a)
	{
		cout<<objA.a<<" is larger than "<<objB.a<<endl;
	}
	else if(objA.a<objB.a)
	{
		cout<<objB.a<<" is larger than "<<objA.a<<endl;
	}
	else
	{
		cout<<objA.a<<" and "<<objB.a<<" are equal"<<endl;
	}
}

// main()
void main()
{
	// object creation
	ValA va;
	ValB vb;

	clrscr();

	//member function call
	va.get();
	vb.get();

	// friend function call
	large(va,vb);
}