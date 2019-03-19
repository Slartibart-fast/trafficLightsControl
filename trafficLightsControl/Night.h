#ifndef _NACHT_H
#define _NACHT_H

#include "OperatingMode.h"
#include "Day.h"
#include <iostream>

using namespace std;

class Night : public OperatingMode {

private:
	static Night* night;
	Night();
	~Night();
public:
	static Night* getInstance();
	OperatingMode* swap ();
	void shift();
};

#endif //_NIGHT_H

