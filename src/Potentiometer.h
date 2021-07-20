#ifndef Potentiometer_h
#define Button_h
#include <Arduino.h>

class Potentiometer {
	private:
		int pin;
		int minMap;
		int maxMap;

	public:
		Potentiometer(int pin, int minMap = 1, int maxMap = 60);
		void setMapping(int minMap, int maxMap);
		int read();
};

#endif
