#include "TrafficLightControl.h"
#include "conio.h"
#include "Day.h"

Day* day = Day::getInstance();

int main() {
	TrafficLightControl* control = new TrafficLightControl(day);
	while (1) {
		for (int i = 0; i < 6; i++) {
			_getch();
			day->shift();
		}
		_getch();
		control->TickEventOccured();
		_getch();
		control->TickEventOccured();
		_getch();
	}
	
}