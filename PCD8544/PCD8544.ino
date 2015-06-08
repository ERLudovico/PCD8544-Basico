/*
 * Sketch9.ino
 *
 * Created: 6/7/2015 5:30:21 PM
 * Author: eludovic
 */ 

#include "MyClass.h"
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

void setup()
{
	myClass.setup();
}

void loop()
{
	myClass.loop();
}
