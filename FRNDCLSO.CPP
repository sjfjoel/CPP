// friend class - directly declare an class object in another class

#include<iostream.h>
#include<conio.h>
// class
class Author   // container class
{
	char name[20];
	friend class Book;  // friend class declaration
};
class Book     // contained class
{
	char title[30];
	float price;

	Author obj; // declaring object of container class

	public:
		void getData()
		{
			cout<<"Enter the details"<<endl;
			cout<<"Author name : "; cin>>obj.name;// frind class access
			cout<<"Book title : "; cin>>title;
			cout<<"Book price : "; cin>>price;
		}
		void putData()
		{
			cout<<endl<<"Entered details are"<<endl;
			cout<<"Author name : "<<obj.name<<endl;
			cout<<"Book title : "<<title<<endl;
			cout<<"Book price : "<<price<<endl;
		}
};

void main()
{
	// object creation
	Book book;
	// no need to create object for Class Author here, because already declared in Class book.

	clrscr();

	// member function calling
	book.getData();
	book.putData();
}