// Template function for array operations

#include<iostream.h>
#include<conio.h>

template <class t>

t addArray(t array[], int size)
{
	t sum = 0;
	for (int i=0; i<size; i++)
	{
		sum = sum + array[i];
	}
	return sum;
}

// main()
int main()
{
	clrscr();
	int arrI[5] = {10, 20, 30, 40, 50};
	float arrF[3] = {10.5,58.6,1.6};


	cout<<"Interger array sum : "<<addArray(arrI, 5)<<endl;
	cout<<"Float array sum : "<<addArray(arrF, 3)<<endl;

	return 0;
}