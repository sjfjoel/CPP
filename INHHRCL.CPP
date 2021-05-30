// Inheritence - Hierachical
/*
		base

	derived     derived
*/

#include<iostream.h>
#include<conio.h>

// class
// Base class
class Account
{
	unsigned int AC_no;
	char name[20];

	public:
		// member function declaration
		void createAc();
		void showAc();
};

//  Derived class of Account
class Savings : public Account
{
	float balance;
	public:
		// member function declaration
		void readBalance();
		void showBalance();
};
// derived class of Account
class Current : public Account
{
	float balance;
	public:
		// member function declaration
		void readBalance();
		void showBalance();
};

// member function definition
// of Account class
void Account :: createAc()
{
	cout<<endl<<"Enter following details"<<endl;
	cout<<"Account number : "; cin>>AC_no;
	cout<<"Name : "; cin>>name;
}
void Account :: showAc()
{
	cout<<endl<<"Account holder's details"<<endl;
	cout<<"Account number : "<<AC_no<<endl;
	cout<<"Name : "<<name<<endl;
}
// of Savings class
void Savings :: readBalance()
{
	account:
	cout<<"Enter Amount : "; cin>>balance;
	if(balance < 1000)
	{
		cout<<"Minimum balance is RS.1000"<<endl;
		goto account;
	}
	else
	{
		cout<<"Your accoount is created, Welcome"<<endl;
	}
}
void Savings :: showBalance()
{
	cout<<endl<<"Available balance : "<<balance<<endl;
}
// of Current class
void Current :: readBalance()
{
	account:
	cout<<"Enter Amount : "; cin>>balance;
	if(balance < 500)
	{
		cout<<"Minimum balance is RS.500"<<endl;
		goto account;
	}
	else
	{
		cout<<"Your accoount is created, Welcome"<<endl;
	}
}
void Current :: showBalance()
{
	cout<<endl<<"Available balance : "<<balance<<endl;
}

// main()
int main()
{
	int accountType;
	clrscr();
	cout<<"Hierarchical Inheritance with Bank Details"<<endl;

	cout<<endl<<"\t\tWelcome to JoCav banking"<<endl<<endl;
	cout<<"Account types : 1. Savings account\t2. Current account"<<endl<<endl;
	accountType:
	cout<<"Enter your account type preferece (1 or 2) : "; cin>>accountType;

	if(accountType == 1)
	{
		cout<<"Savings Account"<<endl;
		// object creation for Savings class
		Savings s;

		// member function calling
		s.createAc();      // mem of base
		s.readBalance();   // mem of derived
		s.showAc();        // mem of base
		s.showBalance();   // mem of derived
	}
	else if(accountType == 2)
	{
		cout<<"Current Account"<<endl;
		// object creation for Current class
		Current c;

		// member function calling
		c.createAc();      // mem of base
		c.readBalance();   // mem of derived
		c.showAc();        // mem of base
		c.showBalance();   // mem of derived
	}
	else
	{
		cout<<"Enter valid account type"<<endl;
		goto accountType;
	}
	return 0;
}