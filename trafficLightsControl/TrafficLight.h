#ifndef _TRAFFICLIGHT_H
#define _TRAFFICLIGHT_H

#include "Colour.h"

class Colour;

class TrafficLight {

public:
	TrafficLight();
	TrafficLight(Colour* start_colour);
	~TrafficLight();
	void swap();
	Colour* getColour();
	void setColour(Colour* init_colour);

private:
	Colour * colour;
};

#endif //_TRAFFICLIGHT_H
