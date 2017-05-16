#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"

using namespace std;

Student::Student() {
}

Student::~Student() {
}

Student::Student(string fName, string lName): Person(fName, lName)
{
}

Student::Student(string fName, string lName, int age) : Person(fName, lName, age)
{
}