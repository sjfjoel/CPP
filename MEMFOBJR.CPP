// Member function  with class type(object as return) return value
// Returns all data members

#include<iostream.h>
#include<conio.h>

// class definition
class ObjReturn
{
	int a, b;
	public:
		// member function declrations
		void getData();
		void showData();
		// class type return
		ObjReturn sum(ObjReturn obj);
};

// member function definitions
void ObjReturn::getData()
{
	cout<<"Enter value 1 : "; cin>>a;
	cout<<"Enter value 2 : "; cin>>b;
}
void ObjReturn::showData()
{
	cout<<"Values are "<<a<<", "<<b<<"."<<endl;
}
ObjReturn ObjReturn::sum(ObjReturn obj)
{
	ObjReturn temp;
	temp.a = a + obj.a;
	temp.b = b + obj.b;
	return temp;
}

// main function
void main()
{
	// object creation
	ObjReturn or1, or2, or3;
	clrscr();

	// member function calling
	or1.getData();
	or2.getData();

	//pass an object as parameter
	or3 = or1.sum(or2);

	cout<<endl<<"The entered values are"<<endl;
	or1.showData();
	or2.showData();

	cout<<endl<<"The sum value"<<endl;
	or3.showData();
}


