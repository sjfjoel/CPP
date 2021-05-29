// operator overloading
// + operator for concatenate 2 string

#include<iostream.h>
#include<conio.h>
#include<string.h>

// class
class OpOl
{
	char string[30];
	public:
		// member function definition
		void read()
		{
			cout<<"Enter the string : "; cin>>string;
		}
		void show()
		{
			cout<<"Concatinated string is : "<<string<<endl;
		}

		// operator overloading (+)
		OpOl operator + (OpOl obj)
		{
			OpOl conObj;			   // create a new object member
			strcpy(conObj.string, string);     // assign the fisrt string into an new object
			strcat(conObj.string, " ");        // add a space at the end of new string
			strcat(conObj.string, obj.string); // add second string with the new string

			return conObj;
		}
};

// main()
int main()
{
	clrscr();
	cout<<"String concatenation using operatoe overloading \"+\""<<endl;

	// object creation
	OpOl oo1, oo2, oo3;

	// member function call
	oo1.read();
	oo2.read();

	// + overloding
	// colloct the returned object on oo3
	oo3 = oo1 + oo2;

	oo3.show();

	return 0;
}