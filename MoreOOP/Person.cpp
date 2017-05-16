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

void Person::DisplayName() {
	cout << "Person's name: " << firstName + " " + lastName << endl;
}

void Person::DisplayAge() {
	cout << "Person's age: " << age << endl;
}