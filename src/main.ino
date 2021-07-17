#include "Button.h"
#include "MSTControl.h"

Button btn = Button(2);

void setup() {};

void loop() {
	if (btn.wasPressed()) {
		MSTControl.runCommand("brb");
		delay(100);
		MSTControl.setStatus("Back in 5!", true);
	}
}
