// Reference datatype
/*
   syntax: datatype &variable = variable;
   alias of existing variable

   must be initialized at the time of declaration.
   it shares the data between functions.
   should not be re assigned;
*/

#include<iostream.h>
#include<conio.h>
void main()
{
	int a=100;
	int &b=a;
	int &c=b;
	clrscr();
	cout<<&a<<ends<<&b<<ends<<&c<<endl;
	cout<<a<<ends<<b<<ends<<c<<endl;
	c=300;
	cout<<a<<ends<<b<<ends<<c<<endl;
}