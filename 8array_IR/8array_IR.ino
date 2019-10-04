
int s[8]={2,3,4,5,6,7,8,9},i,avg=0,j;
int a[8]={10,20,30,40,50,60,70,80},b[8];

void setup() {
 for(i=0;i<8;i++)
 pinMode(s[i],INPUT);
  Serial.begin(9600);

}

void loop() {
Serial.println("10 20 30 40 50 60 70 80");
j=0;
for(i=0;i<8;i++)
{if(digitalRead(s[i])==HIGH)
{Serial.print(" * ");
 b[j++]=a[i];
}
else
Serial.print(" _ ");
}
i=j;
while(j>=0)
avg=avg+b[j--];
avg=avg/i;
Serial.print(" line at ");
Serial.println(avg);
delay(500);
}
