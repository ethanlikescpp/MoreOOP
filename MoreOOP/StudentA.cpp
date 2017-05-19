#include "stdafx.h"
#include <iostream>
#include <string>
#include "StudentA.h"
#include "Person.h"

using namespace std;

StudentA::StudentA() {
}

StudentA::~StudentA() {
}

StudentA::StudentA(string &theirname, int theirage, string &takingcourse) {
	course = takingcourse;
	firstName = theirname;
	age = theirage;
}

void StudentA::SayHello() {
	Person::SayHello();
	cout << "A student! Taking " << course << endl;
}


void StudentA::display() {
	Person::SayHello();
	Person::DisplayName();

}