#ifndef _RED_H
#define _RED_H

#include "Colour.h"

class Red : public Colour {

private:
	Red();
	~Red();
public:
	static Red* getInstance();
	Colour* swap ();
};

#endif //_RED_H