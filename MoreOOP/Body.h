#pragma once

using namespace std;

class Handle;

class Body {
	friend class Handle;

private:
	int somenum;
};