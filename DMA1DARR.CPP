// DMA for single dimensional array
// pointer variable and a new operator are the important things here.
#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	cout<<"Enter the size of array : ";
	cin>>n;
	int *array = new int[n];
	for(i=0; i<n; i++)
	{
		cout<<"Enter the element "<<i+1<<":"<<ends;
		cin>>array[i];
	}

	cout<<endl<<"The entered array is :"<<endl;
	for(i=0; i<n; i++)
	{
		cout<<array[i]<<ends<<ends;
	}

}