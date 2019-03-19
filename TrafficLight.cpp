#include "trafficLight.h"


TrafficLight::TrafficLight() {
}

TrafficLight::TrafficLight(Colour* start_colour) {
	colour = start_colour;
}

TrafficLight::~TrafficLight() {
}

void TrafficLight::swap() {
	colour = colour->swap();
}

Colour* TrafficLight::getColour() {
	return colour;
}

void TrafficLight::setColour(Colour* init_colour) {
	colour = init_colour;
}
