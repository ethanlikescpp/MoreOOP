#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class PersonA {
private:
	string name;
	int age;

public:
	PersonA();
	PersonA(string name, int age);
	virtual ~PersonA();
	virtual void display();

};