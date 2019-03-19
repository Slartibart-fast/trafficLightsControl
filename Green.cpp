#include "Green.h"
#include "Yellow.h"
#include <iostream>

using namespace std;


Green::Green() {
}


Green::~Green() {
}

Green* Green::getInstance() {
	static Green* green = new Green();
	return green;
}

Colour* Green::swap () {
	cout << "Yellow" << endl;
	return Yellow::getInstance();
}