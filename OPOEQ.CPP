// operator overloading
/*
    addind special task to an operator
    operators can't be over loaded are ::, ., .*, ?:, sizeof();

    atleast one user defined datatype must be present (in left side)

    syn:  inside class
	  return_type operator symbol_of_operator(arg_lis)
	  {
		....;
		..; return value;
	  }
	  outside class
	  return_type class_name operator symbol_of_operator(arg_lis)
	  {}
*/

#include<iostream.h>
#include<conio.h>

// class
class OpOl
{
	int value;
	public:
		// member function definition
		void read()
		{
			cout<<"Enter value : "; cin>>value;
		}

		//void compare(OpOl obj)
		// operator overloading
		void operator == (OpOl obj)
		{
			if(value == obj.value)
			{
				cout<<"Both are equal"<<endl;
			}
			else
			{
				cout<<"Both are not equal"<<endl;
			}
		}
};
/*
operator overloading outside the class
void OpOl::operator(OpOl obj){}
*/

// main()
int main()
{
	clrscr();

	// object creation
	OpOl oo1, oo2;

	// member function call
	oo1.read();
	oo2.read();

	//oo1.compare(oo2);
	// using operator overloading
	oo1 == oo2;

	return 0;
}