// MoreOOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Handle.h"
#include "StudentA.h"
#include "PersonA.h"


class SomeStudent: public Person {
public:
	virtual void SayHello() {
		cout << "Hello!" << endl;
	}
};


int main()
{
	Student student1("John", "Doe", 21);

	student1.SayHello();

	cout << "Name of student: " << student1.DisplayName() << endl;
	cout << "Age of student: " << student1.DisplayTheAge() << endl;

	student1.display();


	Handle h;
	h.someOps();
	cout << "Handle holds " << h.DisplayNum() << endl;

	StudentA joe;
	joe.SayHello();
	
    return 0;
}

