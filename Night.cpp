#include "Night.h"
#include <iostream>

using namespace std;

Night* Night::night = 0;

Night* Night::getInstance() {
	if (night == nullptr) { //falls noch keine Instanz existiert
		night = new Night();
	}
	return night;
}

Night::Night() {
}


Night::~Night() {
}


OperatingMode* Night::swap () {
	cout << endl << endl << "Mode: Day" << endl;
	cout << "Main Road Lights: Green" << endl;
	cout << "Side Road Lights: Yellow" << endl;
	return Day::getInstance();
}

void Night::shift() {
	cout << "Main Road Lights: Yellow" << endl;
	cout << "Side Road Lights: Yellow" << endl;
}