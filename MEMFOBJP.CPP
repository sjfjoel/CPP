// Member function - passing class type parameter(Objects) as an argument

#include<iostream.h>
#include<conio.h>

// class definition
class Large
{
	int value;
	public:
		// member function declaration
		void getData();
		void putData();
		void getLarge(Large obj);
};

// member function difinition
void Large::getData()
{
	cout<<"Enter a value : "; cin>>value;
}
void Large::putData()
{
	cout<<endl<<"Entered value is "<<value<<endl;
}
void Large::getLarge(Large obj)
{


	if (value>obj.value)
	{
		cout<<value<<" is large"<<endl;
	}
	else if(value<obj.value)
	{
		cout<<obj.value<<" is large"<<endl;
	}
	else
	{
		cout<<"Both are equal";
	}
}

//main function
void main()
{
	// object creation for class "Large"
	Large l1,l2;
	clrscr();

	// member function (of class "Large") calling
	l1.getData();
	l2.getData();
	l1.putData();
	l2.putData();

	l1.getLarge(l2); // passing object as parameter.

}