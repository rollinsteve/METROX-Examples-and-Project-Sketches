/*
 * (PROJ01) Metro (and Metro Express) Theremin
 * Desc: Super basic theremin using a light sensor and a piezo element
 * 
 * by Brent Rubell for Adafruit Industries.
*/

int piezoPin = 9;
int photoLightSensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  //  get photo sensor value
  int photoVal = analogRead(photoLightSensorPin);
  /* Create the pitch
   *  map() the photolightsensor value to
   *  a frequency from 150Hz to 1500Hz 
   *  more info about map() - https://www.arduino.cc/en/Reference/Map
   */
  int pitch = map(photoVal, 190, 1100, 150, 1500);
  //  play tone 
  tone(piezoPin, pitch);
}
