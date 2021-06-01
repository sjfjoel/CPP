// File handling in CPP
/*
    ifstream, this class is used to read data to the file
    ofstream, this class is used to send data to the file

    two ways to open file
        1. parameterized constructor  - ifstream file("file_name.file_type");
        2. open member function       - ifstream file;  // object
                                        file.open("file_name.file_type");
*/

// retrive bank account details
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
        void putDet()
        {
            cout<<acno<<"\t"<<name<<"\t"<<balance<<endl;
        }
};

int main()
{
    cout<<"Program for retriving account details from a file"<<endl;

    // object creation
    Bank b;

    //access file
    ifstream file("bank.txt");


    cout<<"AC No\tName\tAmount"<<endl;
    file.read((char *)&b, sizeof(b));
    while(!file.eof())
    {
        b.putDet();
        file.read((char *)&b, sizeof(b));
    }
    file.close();

    return 0;
}