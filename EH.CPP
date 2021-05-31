// Exception handling simple

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a, b;
	try
	{
		cout<<"Enter a divident : "; cin>>a;
		cout<<"Enter a divider : "; cin>>b;

		if(b == 0) throw 0;

		cout<<"Result : "<<a/b<<endl;
	}
	catch (int x)
	{
		cout<<"Division is not possible"<<endl;
	}

	return 0;
}