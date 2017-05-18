// Working with polymorphism

#include "stdafx.h"
#include <iostream>

using namespace std;


class Enemy {
protected:
	int attackpower;

public:
	void setattackpower(int a) {
		attackpower = a;
	}
};

class Ninja: public Enemy {
public:
	void attack() {
		cout << "Ninja inflicts damage of " << attackpower << endl;
	}
};

class Monster : public Enemy {
public:
	void attack() {
		cout << "Monster inflicts damage of " << attackpower << endl;
	}
};


int main() {

	Ninja joe;
	Monster shrek;

	Enemy *enemy1 = &joe;

	joe.setattackpower(3);
	joe.attack();

	shrek.setattackpower(50);
	shrek.attack();

	enemy1->setattackpower(20);
	joe.attack();

	return 0;
}