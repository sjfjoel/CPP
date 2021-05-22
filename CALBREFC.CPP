// Call by reference datatype
// reference data type pass the data between funtions independently.
#include<iostream.h>
#include<conio.h>
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void main()
{
	int a = 10, b = 20;
	clrscr();
	cout<<"Value before change :"<<endl<<"A is :"<<ends<<a<<endl<<"B is : "<<b<<endl;
	swap(a,b);
	cout<<"Value after change :"<<endl<<"A is :"<<ends<<a<<endl<<"B is : "<<b;

}