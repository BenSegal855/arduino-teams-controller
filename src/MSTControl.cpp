#include "MSTControl.h"

/** Opens Miscorsoft Teams app using the start menu.
 */
void MSTControl_::openTeams() {
	Keyboard.write(KEY_LEFT_GUI);
	delay(500);
	Keyboard.print("teams");
	delayKeypress(KEY_RETURN, 500);
	delay(5000);
}

/** Enters the MS Teams search menu.
 * @param inTeams `default = false`: If `true` the Microsoft Teams app is the active window.
 */
void MSTControl_::openSearch(bool inTeams = false) {
	if (!inTeams) {
		openTeams();
	}
	Keyboard.press(KEY_LEFT_CTRL);
	Keyboard.press('e');
	delay(100);
	Keyboard.releaseAll();
}

/** Open Microsoft Teams and run a command.
 * @param command The command to be ran.
 * @param inTeams `default = false`: If `true` the Microsoft Teams app is the active window.
 */
void MSTControl_::runCommand(String command, bool inTeams = false) {
	openSearch(inTeams);
	Keyboard.print("/" + command);
	delay(500);
	Keyboard.write(KEY_TAB);
}

/** Set Microsoft Teams status message.
 * @param status The message to be set.
 * @param inTeams `default = false`: If `true` the Microsoft Teams app is the active window.
 */
void MSTControl_::setStatus(String status, bool inTeams = false) {
	openSearch(inTeams);

	delayKeypress(KEY_TAB);
	delayKeypress(KEY_TAB, 500);
	delayKeypress(KEY_RETURN, 500);
	delayKeypress(KEY_RIGHT_ARROW, 500);
	delayKeypress(KEY_RETURN, 500);

	delay(500);
	Keyboard.press(KEY_LEFT_CTRL);
	Keyboard.press('a');
	delay(100);
	Keyboard.releaseAll();
	Keyboard.print(status);

	for (int i = 0; i < 5; i++) {
		delayKeypress(KEY_TAB);
	}
	delayKeypress(KEY_RETURN);
	delayKeypress(KEY_ESC);
}

void MSTControl_::delayKeypress(uint8_t key, unsigned long ms = 100) {
	delay(ms);
	Keyboard.write(key);
}
