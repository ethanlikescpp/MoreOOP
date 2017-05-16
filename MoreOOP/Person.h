#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person {
	friend void DisplayFirstName(Person & firstName);

private:
	string firstName;
	string lastName;

protected:
	int age;

public:
	Person();
	Person(string fName, string lName);
	Person(string fName, string lName, int age);
	~Person();

	void SayHello();
	string DisplayName();
	//void DisplayAge();
};