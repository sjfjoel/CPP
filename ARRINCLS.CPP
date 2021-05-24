// Array inside the class

#include<iostream.h>
#include<conio.h>

// class
class Student
{
	int id, subject[6];
	char name[20];

	public:
		// member function declaration
		void getData();
		void showResult();
};

// member function definition
void Student::getData()
{
	int i;
	cout<<"Student statement"<<endl;
	cout<<"Enter id : "; cin>>id;
	cout<<"Enter name : "; cin>>name;
	cout<<"Enter marks"<<endl;
	for(i=0; i<6; i++)
	{
		cout<<"Subject "<<i+1<<" : "; cin>>subject[i];
	}
}
void Student::showResult()
{
	int i, total=0;
	float average = 0;

	cout<<endl<<"Student details"<<endl;
	cout<<"Id : "<<id<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Secured marks"<<endl;
	for(i=0; i<6; i++)
	{
		cout<<"Subject "<<i+1<<" : "<<subject[i]<<endl;
	}

	cout<<"Total marks : ";
	for(i=0; i<6; i++)
	{
		total += subject[i];
	}
	cout<<total<<endl;

	average = total/6.0;
	cout<<"Average mark : "<<average<<endl;

	for(i=0; i<6; i++)
	{
		if(subject[i]<35)
		{
			cout<<"You have failed"<<endl;
			goto end;
		}
	}
	cout<<"You have passed"<<endl;
	end:;
}

// main function
void main()
{
	// object creation
	Student s;
	clrscr();

	// member function calling
	s.getData();
	s.showResult();

}
