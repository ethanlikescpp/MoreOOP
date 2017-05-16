#pragma once

#include "stdafx.h"
#include "Person.h"

using namespace std;

class Student:
	public Person
{
public:
	Student();
	~Student();
	Student(string, string);
	Student(string, string, int);
};