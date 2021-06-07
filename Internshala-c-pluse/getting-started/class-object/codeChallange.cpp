#include <iostream>
#include <string>
using namespace std;

class Dogs
{
public:
    int age;
    string color;
    string breed;
    string name;
    void displayDetails();
};

void Dogs::displayDetails()
{
    cout << "Age=" << age << endl
         << "breed=" << breed << endl
         << "color=" << color << endl
         << "name=" << name << "\n\n";
}

int main()
{
    Dogs d1;
    d1.age = 5;
    d1.breed = "Pamoliean";
    d1.color = "Black";
    d1.name = "cios";
    d1.displayDetails();

    Dogs d2;
    d2.age = 6;
    d2.breed = "Mangolian";
    d2.color = "white";
    d2.name = "pinki";
    d2.displayDetails();

    return (0);
}