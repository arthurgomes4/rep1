void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(9,INPUT);

}
int val=0;
int change=-1;


void loop() 
{
  if(val==0||val==255)
  change=-change;
analogWrite(9,val);
val=val+change;
delay(6);



}
