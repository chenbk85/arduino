
#include <Arduino.h>
#include <Timer.h>
#include <SignalSource.h>

#ifndef _BUZZER_SIGNALSOURCE_H_
#define _BUZZER_SIGNALSOURCE_H_


class BuzzerSignalSource: public SignalSource {
protected:
	// buzzer pin
	uint8_t pin;
	// event id for timer
	int timerId;
	// timer.oscillate used in an active period to make sound	
	Timer *timer; 

public:
	BuzzerSignalSource(uint8_t pin, Timer *timer, int onOffset, int offOffset);

	void on();
	void off();
};

#endif
