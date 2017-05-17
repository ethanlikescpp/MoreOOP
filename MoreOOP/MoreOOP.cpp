// MoreOOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
#include "Person.h"
#include "Student.h"
#include "Handle.h"
#include "StudentA.h"
#include "PersonA.h"


int main()
{
	Student student1("John", "Doe", 21);

	cout << "Name of student: " << student1.DisplayName() << endl;
	cout << "Age of student: " << student1.DisplayTheAge() << endl;
	DisplayFirstName(student1);

	Handle h;
	h.someOps();
	cout << "Handle holds " << h.DisplayNum() << endl;

	PersonA someguy("John Smith", 23);

	someguy.display();

    return 0;
}

