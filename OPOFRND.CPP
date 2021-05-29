// operator overloading - using friend
// "<, >"

#include<iostream.h>
#include<conio.h>

// class
class ValB; //pre declaration

class ValA
{
	int a;
	public:
		// member function definition
		void read()
		{
			cout<<"Enter any value : "; cin>>a;
		}

		// operator over loading using friend
		friend void operator > (ValA, ValB);

};

class ValB
{
	int b;
	public:
		void read()
		{
			cout<<"Enter any value : "; cin>>b;
		}
		friend void operator > (ValA, ValB);
};

// operator overloaded using friend
void operator > (ValA oa, ValB ob)
{
	oa.a > ob.b ? cout<<oa.a<<" is big":cout<<ob.b<<" is big";
}

// main()
int main()
{
	clrscr();

	// object creation
	ValA oa;
	ValB ob;

	// member function calling
	oa.read();
	ob.read();

	// operator overloading
	oa>ob;

	return 0;
}