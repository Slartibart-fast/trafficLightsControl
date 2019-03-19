#ifndef _DAY_H
#define _DAY_H

#include "OperatingMode.h"
#include "Night.h"
#include "TrafficLight.h"
#include <iostream>

class Day : public OperatingMode {

private:
	static Day* day;
	Day();
	~Day();
	TrafficLight* trafficLight_1;
	TrafficLight* trafficLight_2;

public:
	static Day* getInstance();
	OperatingMode* swap();
	void shift();
};

#endif //_DAY_H

