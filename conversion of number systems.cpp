#include<iostream>
#include<cmath>
using namespace std;
void binary(int);
void hexa(int);
void reverse(int);
int main()
{cout<<"enter the decimal number(integer only)\n";
int n,choice;
cin>>n;
while(choice!=0)
{cout<<"\n1-convert to binary\n2-convert to hexa decimal\n3-invert number\n0-exit";
cin>>choice;
switch(choice)
{case 1 :{binary(n);break;}
         
case 2 :{hexa(n);break;}

case 3 :{reverse(n);break;}

case 0 :exit(0);

default: cout<<"error";
}}
return 0;
}

void binary(int n)
{
int a[40],i=0,j;
 while(n>0)
 {a[i]=n%2;
 n=n/2;
 i++;
 }
for(j=i-1;j>=0;j--)
 cout<<a[j];
 return;
 }
 
 void reverse(int n)
 {
 int d,rev=0;
 while(n>0)
 {d=n%10;
 n=n/10;
 rev=rev*10+d;
 }
  
 cout<<rev; 
 }
void hexa(int n)
{int i=0;
char a[40];
while(n>0)
{if(n%16<10)
a[i++]=n%16+48;
else
a[i++]=n%16+55;
n=n/16;
}
i=i-1;
while(i>=0)
{
cout<<a[i];
i--;}
}
  
  
 
 
 
 
 
 
 
 
 
 
 
 
 

