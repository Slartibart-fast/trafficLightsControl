#ifndef _YELLOW_H
#define _YELLOW_H

#include "Colour.h"

class Yellow : public Colour {

private:
	Yellow();
	~Yellow();
public:
	static Yellow* getInstance();
	Colour* swap ();
};

#endif //_YELLOW_H

