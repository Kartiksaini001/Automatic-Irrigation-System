// Automatic Irrigation System (Digital Version) !!
int Relay = 8; 
int moistureSensor = 13; 
int moisture; 
void setup() 
{
  pinMode(Relay, OUTPUT); // Set pin 13 as OUTPUT pin, to send signal to relay
  pinMode(moistureSensor, INPUT); // Set pin 8 as INPUT pin, to receive data from soil moisture sensor.
}

void loop() 
{ 
  moisture = digitalRead(moistureSensor); // Reads the Digital value of the moisture sensor
  if (moisture == LOW) 
  {
    digitalWrite(Relay, LOW); // if soil moisture sensor provides LOW value, send LOW value to relay
  }
  else
  {
    digitalWrite(Relay, HIGH); // if soil moisture sensor provides HIGH value, send HIGH value to relay
  }
  delay(400);
}
