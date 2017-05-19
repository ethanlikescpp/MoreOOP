#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class StudentA :public Person 
{
private:
	string course;

public:
	StudentA();
	~StudentA();
	StudentA(string & name, int age, string & course);
	virtual void display();		
	virtual void SayHello();
};