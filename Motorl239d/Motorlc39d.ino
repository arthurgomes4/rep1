void setup()
{
Serial.begin(9600);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);

digitalWrite(8,HIGH);
}
int motor1pin1=4, motor1pin2=5, motor2pin1=6, motor2pin2=7;char ch;
void loop() 
{{if(Serial.available())char ch;
 ch=(char)Serial.read();}
  if(ch=='f')
 {digitalWrite(motor1pin1,HIGH);
 digitalWrite(motor1pin2,LOW);
 digitalWrite(motor2pin1,HIGH);
 digitalWrite(motor2pin2,LOW);
 
 }
if(ch=='b')
{digitalWrite(motor1pin1,LOW);
 digitalWrite(motor1pin2,HIGH);
 digitalWrite(motor2pin1,LOW);
 digitalWrite(motor2pin2,HIGH);
 
 }
if(ch=='l')
{digitalWrite(motor1pin1,LOW);
 digitalWrite(motor1pin2,HIGH);
 digitalWrite(motor2pin1,HIGH);
 digitalWrite(motor2pin2,LOW);
 
 }
if(ch=='r')
 {digitalWrite(motor1pin1,HIGH);
 digitalWrite(motor1pin2,LOW);
 digitalWrite(motor2pin1,LOW);
 digitalWrite(motor2pin2,HIGH);
 
 }
 if(ch=='s')
 {digitalWrite(motor1pin1,LOW);
 digitalWrite(motor1pin2,LOW);
 digitalWrite(motor2pin1,LOW);
 digitalWrite(motor2pin2,LOW);
 }
}
