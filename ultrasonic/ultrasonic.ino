void setup() {
 Serial.begin(9600);
 pinMode(9,OUTPUT);
 pinMode(10,INPUT);
 
 
//9 is trigger, 10 is echo
}
float d;
long t;
void loop() 
{
  digitalWrite(9,LOW);
  digitalWrite(9,HIGH);
  
  delayMicroseconds(10);
  digitalWrite(9,LOW);
  
  t=pulseIn(10,HIGH);
 
  d=t*340/20000.0;
  Serial.print(d);
  Serial.println("centimetres");
  
 

}
