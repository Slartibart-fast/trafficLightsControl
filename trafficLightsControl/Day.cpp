#include "Day.h"
#include "Green.h"
#include "Red.h"
#include "Yellow.h"

using namespace std;

Day* Day::day = 0;

Day* Day::getInstance() {
	if (day == nullptr) { //falls noch keine Instanz existiert
		day = new Day();
	}
	return day;
}

Day::Day() {
	trafficLight_1 = new TrafficLight(Green::getInstance());
	trafficLight_2 = new TrafficLight(Red::getInstance());
}


Day::~Day() {
	delete trafficLight_1;
	delete trafficLight_2;
	trafficLight_1 = nullptr;
	trafficLight_2 = nullptr;
}


OperatingMode* Day::swap () {
	trafficLight_1->setColour(Green::getInstance());
	trafficLight_2->setColour(Red::getInstance());

	cout << endl << endl << "Mode: Night" << endl;
	cout << "Main Road Lights: Yellow" << endl;
	cout << "Side Road Lights: Yellow" << endl;

	return Night::getInstance();
}

void Day::shift() {
	cout << endl << "Main Road: ";
	trafficLight_1->swap();
	cout << "Side Road: ";
	trafficLight_2->swap ();
}
