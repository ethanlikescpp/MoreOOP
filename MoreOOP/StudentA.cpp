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




void StudentA::display() {
	Person::SayHello();
	Person::DisplayName();

}