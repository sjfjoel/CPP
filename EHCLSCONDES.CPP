// Exception handling with constructor and destructor
/*
    When we use throw before even delete obj_name; destructor will be invoked automatically.
*/

#include<iostream>
using namespace std;

// class
class EH
{
	public:
	// constructor
	EH()
	{
	cout<<"Constrctor has been invoked"<<endl;
	}
	//destructor
	~EH()
	{
	cout<<"Destructor has been invoked"<<endl;
	}
};

int main()
{
	try
	{
		// object creation
		EH eh;

		cout<<"Before throw statement"<<endl;
		throw 1; // instead of one we can pass 10.2/'A' too
		cout<<"After throw statement"<<endl;
	}
	catch(...)
	{
		cout<<"Catched the thrown value "<<endl;
	}
	cout<<"Thank you"<<endl;

	return 0;
}