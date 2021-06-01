// employee with oops

#include<iostream>
using namespace std;

class Hike   // Abstract  class
{
     virtual void askHike() = 0;
};
class Employee : public Hike
{
    int ID;
    int Age;
    public:
    string Name;
    // constructor
    Employee(int id, string name, int age)
    {
        ID = id;
        Name = name;
        Age = age;
    }
    
    // setter
    void setID(int id)
    {
        ID = id;
    }
    //getter
    void getID(int id)
    {
        id = ID;
    }
        // setter
    void setName(string name)
    {
        Name = name;
    }
    //getter
    void getName(string name)
    {
        name = Name;
    }
        // setter
    void setAge(int age)
    {
        Age = age;
    }
    //getter
    void getAge(int age)
    {
        age = Age;
    }
    
    // member function
    void empDetails()
    {
        cout<<"ID : "<<ID<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"Age : "<<Age<<endl;
    }
    virtual void work() // virtual keyword enable to check whether the function is available in derived class, if found it will be executed, else this function will be executed.
    {
        cout<<Name<<" is working on data entries, document maintaining"<<endl;
    }
    void askHike()
    {
        if(Age>30)
        {
            cout<<"You got the HIKE, Congrats "<<Name<<"."<<endl;
        }
        else
        {
            cout<<Name<<", Hike request is denied..."<<endl;
        }
    }
};

class Developer : public Employee
{    
    string FavProg;
    public:
    Developer(int id,string name,int age,string favprog) 
            : Employee(id, name, age)
    {
        FavProg = favprog;
    }
    void work()
    {
        cout<<Name<<" is working on "<<FavProg<<endl;
    }
};

class Tester : public Employee
{
    string Tool;
    public:
    Tester(int id, string name, int age, string tool)
        : Employee(id, name, age)
    {
        Tool = tool;
    }
    void work()
    {
        cout<<Name<<" is working on "<<Tool<<endl;
    }
};

class Trainee : public Employee
{
    //string Interest;
    public:
    Trainee(int id, string name, int age)
        : Employee(id, name, age)
        {
        //    Interest = interest;
        }
    
};

// main()
int main()
{
    cout<<endl;
    //Employee employee(172,"Joel",23);
 /* 
    //employee.Name = "Joel";

    employee.empDetails();
    employee.setID(3258);
    employee.getID(172);
    employee.empDetails(); */

    Developer developer = Developer(342,"Esther",35,"C++");
    Tester tester = Tester(768,"jack", 27, "selinium");
    Trainee trainee = Trainee(493, "stephilan", 26);

    // using reference   '*'
    cout<<"Using references "<<endl;
    Employee *e1 = &developer;
    Employee *e2 = &tester;
    Employee *e3 = &trainee;

    e1->work();
    e2->work();
    e3->work();

    // without using reference '*'
    cout<<endl;
    cout<<"Without using references "<<endl;
    developer.work();
    tester.work();
    trainee.work();

    /* developer.work();
    //developer.askHike();

   
    //t.empDetails();
    t.work();
    //t.askHike(); */
    cout<<endl;
    return 0;
}