#include<Servo.h>
char ch;
int PWM=11,i=0; 
Servo obj;
void setup() 
{
 obj.attach(PWM);
Serial.begin(9600);
 obj.write(90);
}

void loop()
{
  
  if(Serial.available())
  ch=char(Serial.read());
  if(ch=='l')
  {
    obj.write(180);//go to 180
    
  }
  if(ch=='r')
  {
    obj.write(0);//go to 0
    
  }
  if(ch=='m')
  {
    obj.write(90);//go to 90
  }
  if(ch=='4')
  {
    for(i=0;i<=180;i++)// go from 0 to 180
    {obj.write(i);
    delay(30);}
  }
  if(ch=='6')
  {
    for(i=180;i>=0;i--)//go from 180 to 0
    {obj.write(i);
    delay(30);}
  }


}
