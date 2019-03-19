#ifndef _YELLOWRED_H
#define _YELLOWRED_H

#include "Colour.h"

class YellowRed : public Colour {

private:
	YellowRed();
	~YellowRed();
public:
	static YellowRed* getInstance();
	Colour* swap ();
};

#endif //_RED_H

