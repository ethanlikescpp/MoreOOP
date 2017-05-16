#include "stdafx.h"
#include "Handle.h"

using namespace std;

Handle::Handle() {
	body = new Body;
}

Handle::~Handle() {
	delete body;
}

void Handle::someOps() {
	body->somenum = 42;
}

int Handle::DisplayNum() {
	return body->somenum;
}