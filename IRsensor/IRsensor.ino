// Include the library:
#include "SharpIR.h"
#include <LiquidCrystal_I2C.h>
#include "Screen.h"

// Define model and input pin:

//MODELS:
//GP2Y0A21YK 1080
//GP2Y0A02YK 20150
//GP2Y0A710K0F 100500

#define IRPin A0
#define model 1080

// Create variable to store the distance:
int distance_cm;

// Create a new instance of the SharpIR class:
SharpIR mySensor = SharpIR(IRPin, model);

Screen screen; // Create an instance of the Screen class

void setup() {
  // Begin serial communication at a baudrate of 9600:
  Serial.begin(9600);
  screen.init(); // Initialize the LCD in the Screen class
}

void loop() {
  // Get a distance measurement and store it as distance_cm:
  distance_cm = mySensor.distance();

  // Print the measured distance to the serial monitor:
  Serial.print("Mean distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  // Display the distance on the LCD
  screen.distance_cm = distance_cm;
  screen.show();

  delay(1000);
}
