#ifndef _OPERATINGMODE_H
#define _OPERATINGMODE_H
class OperatingMode {
public:
	virtual OperatingMode* swap () = 0;
	virtual void shift() = 0;
};

#endif //_OPERATINGMODE_H

