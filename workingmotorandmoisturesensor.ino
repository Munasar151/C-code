// C++ code
//
int moisture = 0;

void setup()
{
  pinMode(A0, OUTPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  digitalWrite(A0, LOW);
  
  
}

void loop()
{
  // Apply power to the soil moisture sensor
  digitalWrite(A0, HIGH);
  delay(10); // Wait for 10 millisecond(s)
  moisture = analogRead(A1);
  // Turn off the sensor to reduce metal corrosion
  // over time
  digitalWrite(A0, LOW);
  Serial.println(moisture);
  
  
  if (moisture < 200) {
    digitalWrite(8, HIGH);
    delay(2000);
  } else{
    digitalWrite(8, LOW);
  }
  delay(1000); // Wait for 100 millisecond(s)
}