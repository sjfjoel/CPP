// constant data member
/*
    const must be initialized at the time of declaration
    in class, we cant init a variable

    we can init the const variable by only using constructor

    const int var_name;

    class_name():var_name(100){}

*/

#include<iostream.h>
#include<conio.h>

// class
class SimpleInt
{
	int p;    // principle amount
	int t;    // time / year
	const float r;  // rate of interest //const

	public :
		// constructor
		SimpleInt():r(5)            // const init
		{
		}

		// member functions
		void read()
		{
			cout<<"Enter the principal amount : "; cin>>p;
			cout<<"Enter the time / year : "; cin>>t;
		}
		float result()
		{
			return (p*t*r)/100;
		}

};

// main()
int main()
{
	clrscr();
	cout<<"Interest calculation with rate of interest 5"<<endl;

	//object creation
	SimpleInt si;  // constructor will invoked

	//member function calling
	si.read();
	cout<<"Intrest amount is : "<< si.result()<<endl;

	return 0;
}