#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class StudentA :public Person 
{
public:
	StudentA();
	~StudentA();
	void display();		
	
};