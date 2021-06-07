#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    int id;
    int age;
    string fullName;
    int phoneNumber;
};

class Student : public Person
{

public:
    string schoolName;

    void study()
    {
        cout << "Studying" << endl;
    }
};

class Employee : public Person
{

public:

    string companyName;

    void work()
    {
        cout << "Working" << endl;
    }
};

int main()
{

    Student student;
    student.age = 16;
    student.fullName = "Ramesh kumar";
    student.id = 102;
    student.phoneNumber = 123456789;
    student.schoolName = "ssdec";
    student.study();

    Employee emp;
    emp.age = 40;
    emp.companyName = "Amazon";
    emp.id = 1254;
    emp.fullName = "Rajuu thoda";
    emp.phoneNumber = 1234564588;
    emp.work();
    return 0;
}