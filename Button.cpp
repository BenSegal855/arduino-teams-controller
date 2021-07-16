#include "Button.h"

Button::Button(int pin) {
	this->pin = pin;
	this->currState = LOW;
	this->prevState = LOW;
	pinMode(this->pin, INPUT);
}

int Button::read() {
	this->prevState = this->currState;
	this->currState = digitalRead(this->pin);
	return this->currState;
}

int Button::wasPressed() {
	return this->read() == HIGH && this->currState != this->prevState;
}

