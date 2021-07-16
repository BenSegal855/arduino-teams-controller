#include "control.h"
#include "Button.h"

// Debounce variables
Button btn = Button(PIN);

// Program state
int counter;
int ledState;

void setup() {
	// Initialize Keyboard
	Keyboard.begin();

	// Initialize LED
	ledState = 0;
	pinMode(LED, OUTPUT);

	// Initialize globals
	counter = 0;
}

void loop() {
	if (btn.wasPressed()) {
		counter++;
		ledState = !ledState;
		Keyboard.println("The button has been pressed " + String(counter) + " times.");

	}

	digitalWrite(LED, ledState);
}
