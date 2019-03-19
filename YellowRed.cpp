#include "Green.h"
#include "YellowRed.h"
#include <iostream>

using namespace std;


YellowRed::YellowRed() {
}

YellowRed::~YellowRed() {
}

YellowRed* YellowRed::getInstance() {
	static YellowRed* yellowRed = new YellowRed();
	return yellowRed;
}

Colour* YellowRed::swap () {
	cout << "Green" << endl;
	return Green::getInstance();
}