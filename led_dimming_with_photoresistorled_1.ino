// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}
int sensorValue;
byte dim;


void loop()
{
  sensorValue = analogRead(A0);
  Serial.print("sensorValue = ");
  Serial.print(sensorValue);
  dim = map(sensorValue,750,1000,0,255);
  if(dim<0)dim=0;
  Serial.print(", dim = ");
  Serial.println(dim);
  analogWrite(9, dim);
}
