#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person {
	friend void DisplayFirstName(Person &);

private:
	

protected:
	int age;
	string firstName;
	string lastName;

public:
	Person();
	Person(string fName, string lName);
	Person(string fName, string lName, int age);
	~Person();

	void SayHello();
	string DisplayName();
	//void DisplayAge();
};