#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include "PersonA.h"

using namespace std;

class StudentA :public PersonA 
{
private:
	string course;

public:
	virtual void display();
};