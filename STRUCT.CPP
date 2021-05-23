// Structure in c++

/*
    it has member datas and member functions
    accessed with public/private/protected, by default public
*/

#include<iostream.h>
#include<conio.h>
struct student
{
	int id;
	char name[20];
	void read()
	{
		cout<<"Enter the id : "; cin>>id; cout<<"Enter the name : "; cin>>name;
		cout<<endl<<"Id : "<<id<<endl<<"Name : "<<name;
	}
};
void main()
{
	struct student s;
	clrscr();
	s.read();
}