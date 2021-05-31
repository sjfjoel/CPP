// inheritance virtual class
/*  Avoid the multiple copies of a class  */
#include<iostream.h>
#include<conio.h>

// classes
// base class
class Base
{
	public:
		// member function defintion
		void bf()
		{
			cout<<"Base class function is called"<<endl;
		}
};
// derived from Base class
class DerivedBase1 : public virtual Base
{
	public:
		// member function defintion
		void dbf1()
		{
			cout<<"DerivedBase1 class function is called"<<endl;
		}
};
// derived from Base class
class DerivedBase2 : public virtual Base
{
	public:
		// member function defintion
		void dbf2()
		{
			cout<<"DerivedBase2 class function is called"<<endl;
		}
};
// derived from DerivedBase1 class and DerivedBase2 class
class DerBasDerived : public DerivedBase1, public DerivedBase2
{
	public:
		// member function defintion
		void dbdf()
		{
			cout<<"DerivedBaseDerived class function is called"<<endl;
		}
};

// main()
int main()
{
	clrscr();

	//object creation
	DerBasDerived dbd;
	dbd.bf();
	dbd.dbf1();
	dbd.dbf2();
	dbd.dbdf();

	return 0;
}