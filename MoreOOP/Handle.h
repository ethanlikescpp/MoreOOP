#pragma once

#include "Body.h"

using namespace std;

class Handle {
private:
	Body * body;

public:
	Handle();
	~Handle();

	void someOps();
	int DisplayNum();
};