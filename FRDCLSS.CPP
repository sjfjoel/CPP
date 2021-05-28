// friend class - calling via object
// declare a class as friend class

#include<iostream.h>
#include<conio.h>
// class
class ClassA
{
	int a, b;
	public :
		// frind class declaration
		friend class ClassB;
		void getData()
		{
			cout<<"Enter the value 1 : ";
			cin>>a;
			cout<<"Enter the value 2 : ";
			cin>>b;
		}
};
class ClassB
{
	public:
		void putData(ClassA obj)  // object of a class
		{
			cout<<"A is "<<obj.a<<endl;
			cout<<"B is "<<obj.b;
		}
};
void main()
{
	ClassA ca;
	ClassB cb;

	ca.getData();
	cb.putData(ca);
}
