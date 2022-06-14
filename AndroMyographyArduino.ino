#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2 , 3); // RX|TX

int sensorPin = A0;
int sensorData = 0;

void setup() {
  pinMode(sensorPin , INPUT);
  Serial.begin(9600);
  bluetooth.begin(9600);

}

void loop() {
  
  // read the value from analog input
  sensorData = analogRead(sensorPin);
  bluetooth.print(sensorData);
  delay(1000);

}
