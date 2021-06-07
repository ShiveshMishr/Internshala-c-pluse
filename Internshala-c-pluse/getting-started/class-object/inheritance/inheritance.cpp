#include <iostream>
#include <string>
using namespace std;

class Animal
{

public:
    int age;
    string color;

    void run()
    {
        cout << "Running" << endl;
    }

    void displayDetails();
};

class Dog : public Animal
{

public:
    string petName;

    void bark()
    {
        cout << "Barking" << endl;
    }
    
};

class Lion : public Animal
{

public:
    void roar()
    {
        cout << "Roaring" << endl;
    }
  
};

void Animal ::displayDetails(){
    cout <<"dog age:" << age << endl <<"color"<<color;
}

int main()
{

    Dog dog;
    dog.age = 5;
    dog.color = "Black";
    dog.petName = "Jackie";
    dog.bark();
    dog.run();
    dog.displayDetails();

    Lion lion;
    lion.age = 10;
    lion.color = "Brown";
    lion.roar();
    lion.run();
    lion.displayDetails();

    Animal animal;
    animal.age = 7;
    animal.color = "White";
    animal.run();
    animal.displayDetails();

    return 0;
}