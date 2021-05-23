// Class - member function with args

#include<iostream.h>
#include<conio.h>
#include<string.h>

// class definition
class Book
{
	int bid;
	char btitle[20];
	float bprize;

	public:
		// member function declaration
		void getBook(int id, char title[20], float prize);
		void putBook();
};

// member function defintion
void Book::getBook(int id, char title[20], float prize)
{
	bid = id;
	// btitle = title; (string cant be assigned using = operator)
	strcpy(btitle, title);
	bprize = prize;
}
void Book :: putBook()
{
	cout<<"Book details"<<endl;
	cout<<"Book Id : "<<bid<<endl;
	cout<<"Book title : "<<btitle<<endl;
	cout<<"Book prize : "<<bprize<<endl<<endl;
}

// main function
void main()
{
	// object creation for class Book
	Book b1, b2;
	clrscr();

	// member function calling
	b1.getBook(454,"World of Joel",999.00);
	b1.putBook();
	b2.getBook(1068,"universe of Joel",1999.00);
	b2.putBook();
}
