int trigPin =12;
int echoPin =14;
int blue = 2;
long duration, distance;
 
void setup()
{
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(blue,OUTPUT);
}

void loop()
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(100);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance=(duration*0.0340)/2;
  Serial.println(distance);
  Serial.print("CM");
  delay(50);

  if(distance<=15)
  {
    digitalWrite(blue, HIGH);
    delay(50);
  }
  else if(distance>15)
  {
    digitalWrite(blue, LOW);
  }
}