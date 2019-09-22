#include<iostream>
#include<cmath>
using namespace std;
int factorial(int n)
{int i,f=1;
for(i=1;i<=n;i++)
f=f*i;
return(f);
}


int main()
{
cout<<"enter the values of the angle x in degrees and number of terms n";
int n,i;double x,sum=0;
cin>>x>>n;
x=x*3.14/180;
for(i=1;i<=n;i++)
{
sum=sum+(pow(-1,i+1)*pow(x,2*i-1))/factorial(2*i-1);
}
cout<<"the value of sin("<<x<<") by expansion is "<<sum;
return 0;}
