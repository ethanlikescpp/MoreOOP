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

	student1.DisplayName();
	student1.DisplayAge();

    return 0;
}

