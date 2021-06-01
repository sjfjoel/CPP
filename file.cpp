// File handling in CPP
/*
    ifstream, this class is used to read data to the file
    ofstream, this class is used to send data to the file

    two ways to open file
        1. parameterized constructor  - ofstream file("file_name.file_type");
        2. open member function       - ofstream file;  // object
                                        file.open("file_name.file_type");
*/

// store bank account details
#include<iostream>
#include<fstream>
using namespace std;

// class
class Bank
{
    long acno;
    char name[20];
    float balance;
    public:
        //member function definition
        void storeAc()
        {
            cout<<"Enter account number : "; cin>>acno;
            cout<<"Enter name : "; cin>>name;
            cout<<"Enter Amount : "; cin>>balance;
        }
};

//main()
int main()
{
    //object creation
    Bank b;

    cout<<"Enter the account holder details to store"<<endl;
    
    //open a file
    ofstream file("bank.txt"); // parameterized constructor
    char option;
    do
    {
        b.storeAc();
        // write the file 
        file.write((char *) &b, sizeof(b));
        cout<<"1 entery added with the file"<<endl;
        cout<<"Want to add more data [Y/N] : "; cin>> option;
    }while (option=='y'||option=='Y');

    // close the file
    file.close();    
}