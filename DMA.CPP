// Dynamic memory allocation in c++
/*
   new operator used to dynamic allocation
   delete operator used to dynamic deallocation
   DMA always store the data in heap memory.
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int *i;
	float *f;
	char *c;
	clrscr();

	i = new int(10);
	f = new float(3.1427);
	c = new char('J');

	cout<<*i<<ends<<*f<<ends<<*c;
}
