void setup() {
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  

}

void loop()
{
 if(digitalRead(2)==LOW)
 {Serial.println("detected");
  digitalWrite(13,HIGH);
 }
 else
{digitalWrite(13,LOW);
Serial.println("clear");
}
delay(500);
}
