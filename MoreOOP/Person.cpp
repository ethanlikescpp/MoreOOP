#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person() {
}

Person::~Person() {
}

Person::Person(string fName, string lName) {
	firstName = fName;
	lastName = lName;
}

Person::Person(string fName, string lName, int theage) {
	firstName = fName;
	lastName = lName;
	age = theage;
}

void Person::SayHello() {
	cout << "Hello World" << endl;
}

string Person::DisplayName() {
	return this->firstName + " " + this->lastName;
}

void DisplayFirstName(Person & firstName) {
	cout << "First name: " << &firstName << endl;
}

/*
void Person::DisplayAge() {
	cout << "Person's age: " << age << endl;
}
*/