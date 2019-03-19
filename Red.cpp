#include "YellowRed.h"
#include "Red.h"
#include <iostream>

using namespace std;


Red::Red() {
}

Red::~Red() {
}

Red* Red::getInstance() {
	static Red* red = new Red();
	return red;
}

Colour* Red::swap () {
	cout << "Yellow/Red" << endl;
	return YellowRed::getInstance();
}