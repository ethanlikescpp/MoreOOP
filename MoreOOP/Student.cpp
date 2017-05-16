#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

Student::Student() {
}

Student::~Student() {
}

Student::Student():Person("John", "Doe") {
}