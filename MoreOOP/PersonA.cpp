#include "stdafx.h"
#include <iostream>
#include <string>
#include "PersonA.h"

using namespace std;

PersonA::PersonA() {
}

PersonA::~PersonA() {
}

PersonA::PersonA(string inputname, int inputage) {
	name = inputname;
	age = inputage;
}

void PersonA::display() {
	cout << name << ", " << age << endl;
}

