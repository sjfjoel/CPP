// over loading insertion and extraction >>, <<.
/*
    reference operator have to be used
    cin is an object of istream class
    cout is an objectc of o stream class
*/

#include<iostream.h>
#include<conio.h>

// class
class Student
{
	int id;
	char name[20];
	public:
		// overloading insertion
		friend void operator >> (istream &in, Student &s)
		{
			cout<<"Enter student ID : ";
			in>>s.id;
			cout<<"Enter stuent name : ";
			in>>s.name;
		}
		// overloading extraction 
		friend void operator << (ostream &out, Student &s)
		{
			out<<"ID : "<<s.id<<endl;
			out<<"Name : "<<s.name<<endl;
		}
};

// main()
int main()
{
	clrscr();

	// object creation
	Student s;

	// overloading insertion and extraction 
	cin>>s;
	cout<<s;

	return 0;
}