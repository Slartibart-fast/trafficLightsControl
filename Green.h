#ifndef _GREEN_H
#define _GREEN_H

#include "Colour.h"

class Green :public Colour {

private:
	Green();
	~Green();
public:
	static Green* getInstance();
	Colour* swap ();
};

#endif //_GREEN_H

