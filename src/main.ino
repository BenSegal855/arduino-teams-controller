#include "Button.h"
#include "Potentiometer.h"
#include "MSTControl.h"

Button btn = Button(2);
Potentiometer pot = Potentiometer(A0);

void setup() {
	Serial.begin(9600);
};

void loop() {
	if (btn.wasPressed()) {
		Serial.println(pot.read());
		// MSTControl.runCommand("brb");
		// delay(100);
		// MSTControl.setStatus("Back in 5!", true);
	}
}
