#include "Potentiometer.h"

Potentiometer::Potentiometer(int pin, int min = 1, int max = 60) {
	this->pin = pin;
	this->minMap = min;
	this->maxMap = max;
}

void Potentiometer::setMapping(int min, int max) {
	this->minMap = min;
	this->maxMap = max;
}

int Potentiometer::read() {
	int value = analogRead(pin);
	return map(value, 0, 1023, minMap, maxMap);
}
