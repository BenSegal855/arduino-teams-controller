#include "Button.h"

/**
 * @param pin The pin to which the button is connected.
 */
Button::Button(int pin) {
	this->pin = pin;
	this->currState = LOW;
	this->prevState = LOW;
	pinMode(this->pin, INPUT);
}

/**
 * @return The current state of the button.
 */
int Button::read() {
	this->prevState = this->currState;
	this->currState = digitalRead(this->pin);
	return this->currState;
}

/**
 * @return True on the rising edge of the button.
 */
int Button::wasPressed() {
	return this->read() == HIGH && this->currState != this->prevState;
}

/**
 * @return True on the falling edge of the button.
 */
int Button::wasReleased() {
	return this->read() == LOW && this->currState != this->prevState;
}

