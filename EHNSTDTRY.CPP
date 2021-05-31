// Exception handling - Nested try{} and use throw inside catch{}

#include<iostream>
using namespace std;

int main()
{
	try
	{
		cout<<"Welcome to outer try block"<<endl;
		try
		{
			cout<<"Welcome to inner try block"<<endl;
			throw 1; // instead of one we can pass 10.2/'A' too
			cout<<"After throw statement"<<endl;
		}
		catch(int x)
		{
			cout<<"Catched the inner thrown value "<<endl;
			throw x;	
		}
	}
	catch(...)
	{
		cout<<"Catched the outer thrown value "<<endl;
	}
	cout<<"Thank you"<<endl;

	return 0;
}