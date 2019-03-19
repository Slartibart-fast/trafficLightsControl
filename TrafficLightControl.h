#ifndef _TRAFFICLIGHTCONTROL_H
#define _TRAFFICLIGHTCONTROL_H
#include "OperatingMode.h"

class TrafficLightControl {

private:
	OperatingMode* mode;

public:
	TrafficLightControl(OperatingMode* start_mode);
	~TrafficLightControl();
	void TickEventOccured();
	OperatingMode* getMode();
};

#endif //_TRAFFICLIGHTCONTROL_H

