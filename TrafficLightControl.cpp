#include "TrafficLightControl.h"
#include <iostream>

using namespace std;

TrafficLightControl::TrafficLightControl(OperatingMode* start_mode) {
	mode = start_mode;
	cout << "Mode: Day" << endl;
	cout << "Main Road Lights: Green" << endl;
	cout << "Side Road Lights: Red" << endl;
}

TrafficLightControl::~TrafficLightControl(){
}

void TrafficLightControl::TickEventOccured() {
	mode = mode->swap();
}

OperatingMode* TrafficLightControl::getMode() {
	return mode;
}

