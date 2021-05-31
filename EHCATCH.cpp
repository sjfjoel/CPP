// Exception handling simple
/* single catch block for any kind of throw,
   we have to use catch(...){} instead of catch(int arg){}
*/
#include<iostream>
using namespace std;

int main()
{
	try
	{
		cout<<"Before throw"<<endl;
		throw 1; // instead of one we can pass 5/10.2/'A' too(int/float/chat)
		cout<<"After throw"<<endl;
	}
	catch(...)
	{
		cout<<"Catched the thrown value "<<endl;
	}
	cout<<"Thank you"<<endl;

	return 0;
}