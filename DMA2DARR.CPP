// DMA for two dimensional array
// have to use double pointer

#include<iostream.h>
#include<conio.h>
void main()
{
	int **p, nr, nc, r, c; //nr - number of rows, nc - number of columns.
	clrscr();
	cout<<"Enter the number of rows : ";
	cin>>nr;
	cout<<"Enter the number of cloumns : ";
	cin>>nc;
	p = new int *[nr];
	for(r=0; r<nr; r++)
	{
		p[r] = new int[nc];
	}
	cout<<"Enter the array values"<<endl;
	for(r=0; r<nr; r++)
	{
		for(c=0; c<nc; c++)
		{
			cout<<"Enter the elemnt of ["<<r<<"]["<<c<<"] : ";
			cin>>p[r][c];
		}
	}
	cout<<"The entered array is : "<<endl;
	for(r=0; r<nr; r++)
	{
		for(c=0; c<nc; c++)
		{
			cout<<p[r][c]<<ends<<ends;
		}
		cout<<endl;
	}
	delete p;
}