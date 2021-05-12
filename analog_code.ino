// Automatic Irrigation System (Analog Version) !!
int moistureSensor = 0;
int motor = 5;

void setup() 
{
  Serial.begin(9600);
  pinMode(motor, OUTPUT); // Set pin 5 as OUTPUT pin, to send signal to motor
}


void loop() {
  int SensorValue = analogRead(moistureSensor); // Reads the Analog value of the moisture sensor

  if (SensorValue >= 400)
  {   
    digitalWrite(motor, LOW); // if soil moisture sensor provides value greater than 400, then turn OFF the water pump
  }
  else
  {   
    digitalWrite(motor, HIGH); // if soil moisture sensor provides value less than 400, then turn ON the water pump
  }
  delay(400);
}
