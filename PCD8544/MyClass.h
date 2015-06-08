/*
 * MyClass.h
 *
 * Created: 6/7/2015 5:30:21 PM
 * Author: eludovic
 */ 

#ifndef _MYCLASS_h
#define _MYCLASS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

class MyClass
{
 private:


 public:
	void setup();
	void loop();
};

extern MyClass myClass;
	
	void testdrawbitmap(const uint8_t *bitmap, uint8_t w, uint8_t h);
	void testdrawchar(void);
	void testdrawcircle(void);	
	void testfillrect(void);
	void testdrawtriangle(void);	
	void testfilltriangle(void);
	void testdrawroundrect(void);
	void testfillroundrect(void);
	void testdrawrect(void);
	void testdrawline();
	void turnONDisplay();
	
	
#endif

