// First c++ program using class and objects
#include<iostream.h>
#include<conio.h>
class welcome
{
 public:
	int i, j;
	void get();
	void put();
};
void welcome::get()
{
	cout<<"Enter First number :"<<ends;
	cin>>i;
	cout<<"Enter Second number :"<<ends;
	cin>>j;
}
void welcome::put()
{
	cout<<endl<<"Result when adding :"<<ends<<i+j<<endl<<"Result when subtracting :"<<ends<<i-j;
}

main()
{
	clrscr();
	cout<<"First Program in C++ with class and object"<<endl;
	welcome w;
	w.get();
	w.put();
}