// File handling in CPP
/*
    ifstream, this class is used to read data to the file
    ofstream, this class is used to send data to the file

    two ways to open file
        1. parameterized constructor  - ifstream file("file_name.file_type");
        2. open member function       - ifstream file;  // object
                                        file.open("file_name.file_type");
*/

// retrive particular bank account details
#include<iostream>
#include<fstream>
using namespace std;

// class
class Bank
{
    int acno;
    char name[20];
    float balance;

    public:
        void look();
};

void Bank::look()
{
    // object creation
    Bank b;
    // open file
    ifstream file("bank.txt");
    long acno;
    int found=0;
    cout<<"Enter account number to be found : "; cin>>acno;

    file.read((char *)&b, sizeof(b));
    while(!file.eof())
    {
        if (acno == b.acno)
        {
            cout<<"AC No\tName\tAmount"<<endl;
            cout<<b.acno<<"\t"<<b.name<<"\t"<<b.balance<<endl;
            found = 1;
        }
        file.read((char *)&b, sizeof(b));
    }
    file.close();

    if(found == 0) cout<<"No records found"<<endl;
}

int main()
{
    cout<<"Program for retriving particular account details from a file"<<endl;

    // object creation
    Bank b;
    // member function calling
    b.look();

    return 0;
}