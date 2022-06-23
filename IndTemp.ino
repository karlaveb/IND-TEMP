
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  int value = analogRead(A0);
  float volts = (value * 5) / 1023.0;
  float celsius = volts * 100;
  Serial.print(celsius);
  Serial.println(" °C");

  Serial.println(analogRead(A0));

  if (analogRead(A0) < 70) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }

  if (analogRead(A0) < 75) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }

  if (analogRead(A0) > 75) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }

  if (analogRead(A0) > 80) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  delay(100); 
}
