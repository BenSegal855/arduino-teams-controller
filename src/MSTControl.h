#ifndef MSTControl_h
#define MSTControl_h

#include "Keyboard.h"

class MSTControl_ {
	private:
		void delayKeypress(uint8_t key, unsigned long ms = 100);
	public:
		void openTeams();
		void openSearch(bool inTeams = false);
		void runCommand(String command, bool inTeams = false);
		void setStatus(String status, bool inTeams = false);
	
};

extern MSTControl_ MSTControl;

#endif
