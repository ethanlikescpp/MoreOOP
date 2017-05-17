#include "stdafx.h"
#include <iostream>
#include <string>
#include "StudentA.h"
#include "PersonA.h"

using namespace std;

void StudentA::display() {
	PersonA::display();

	cout << course << endl;
}