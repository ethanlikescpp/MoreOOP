// MoreOOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
#include "Person.h"
#include "Student.h"


int main()
{
	Student student1("John", "Doe", 21);

	cout << "Name of student: " << student1.DisplayName() << endl;
	cout << "Age of student: " << student1.DisplayTheAge() << endl;
	DisplayFirstName(student1);

    return 0;
}

