#ifndef Button_h
#define Button_h

class Button {
	private:
		int pin;
		int currState;
		int prevState;

	public:
		Button(int pin);
		int read();
		int wasPressed();
};

#endif
