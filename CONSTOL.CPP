// constructor over loading

#include<iostream.h>
#include<conio.h>
#include<string.h>

//class
class ConstOL
{
	char name[20];
	char course[20];
	float fee;

	public :
		ConstOL(char name[20], char course[20])
		{
			strcpy(this->name, name);
			strcpy(this->course, course);
			fee = 1000;
		}
		ConstOL(char name[20], char course[20], float fee)
		{
			// Constructor overloading
			ConstOL::ConstOL(name, course);  // calling constructor isde constructor
			this->fee = fee;

		}
		void showDetails();
};

// member function definition
void ConstOL::showDetails()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Course : "<<course<<endl;
	cout<<"Fee : "<<fee<<endl;
}

// main function
void main()
{
	// object creation // constructor will be invoked
	ConstOL col1("Joel", "C++"), col2("Joe", "C++", 5000);
	clrscr();

	// member function calling
	col1.showDetails();
	col2.showDetails();
}