#include <iostream>
#include <string>
using namespace std;

string getFullName(string, string);


int main() {

	// String definition.
	string firstName = "Rahul";
	string lastName = "Kamal";

	// Passing string as a parameter and getting a string as the returned value.
	string fullName = getFullName(firstName, lastName);
    cout << fullName;

	// Accessing a character.
	char letter = firstName[1];	
    cout << letter;	// letter = 'a'

	// User input.
	string nickName;
	cout << "\nEnter nick name:";
	getline(cin, nickName);

	// length(): returns the length of the string.
	int length = firstName.length();
    cout << length;		// length of "Rahul" is 5

	// compare(): compares two strings lexicographically.
	int result = firstName.compare(lastName);	// If result is 0, strings are equal. Else not equal.
    cout << result;
	// append(): adds new characters (string) at the end of another string object.
	firstName.append(lastName);		// firstName = RahulKamal

	// Modify the value.
	firstName = "Rahul";
	
	// String array. 
	string names[] = {"Rahul", "Ravi", "Peter"};

	return 0;
}

string getFullName(string firstName, string lastName) {

	// string fullName = firstName + " " + lastName;		// Rahul Kamal
	return firstName + " " + lastName;
}