// copy constructor
/*
   instance of an object
   having referenc type parameter
   having objects(recievs an another object to initialize current object)
*/

#include<iostream.h>
#include<conio.h>

// class
class Copy
{
	int a, b;

	public:
		Copy(int x, int y)   // parameter const
		{
			this->a = x;
			this->b = y;
		}
		Copy(Copy &obj)       // copy const
		{
			this->a = obj.a;
			this->b = obj.b;
		}

		// member function declaration
		void show();

};

// member function definition
void Copy::show()
		{
			cout<<"A is "<<a<<endl;
			cout<<"B is "<<b<<endl;
		}

// main()
void main()
{
	// object declaration
	Copy c1(11, 22);  // parameter const
	Copy c2(c1);      // copy const  (obj c1 is passed as an arg)

	// member function call
	c1.show();
	c2.show();
}