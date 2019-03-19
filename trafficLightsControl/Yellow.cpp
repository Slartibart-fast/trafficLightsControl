#include "Red.h"
#include "Yellow.h"
#include <iostream>

using namespace std;


Yellow::Yellow() {
}


Yellow::~Yellow() {
}

Yellow* Yellow::getInstance() {
	static Yellow* yellow = new Yellow();
	return yellow;
}

Colour* Yellow::swap () {
	cout << "Red" << endl;
	return Red::getInstance();
}