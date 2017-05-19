#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person {
	

private:
	

protected:
	int age;
	string firstName;
	string lastName;

public:
	Person();
	Person(string fName, string lName);
	Person(string fName, string lName, int age);
	virtual ~Person();

	virtual void SayHello();
	virtual void display();
	
	string DisplayName();
	void DisplayAge();
};