#include<iostream>
using namespace std;
int main()
{int n,i=0,j;
cout<<"enter the number of elements";
cin>>n;
int a[n];
cout<<"enter the elements";
for(i=0;i<n;i++)
cin>>a[i];
i=0;

while(i<n)
{
if(a[i]<a[i+1])
{
for(j=i;j<n-1;j++)
a[j]=a[j+1];
n--;
}
else
i++;
}
for(i=0;i<n;i++)
cout<<" "<<a[i];
}



