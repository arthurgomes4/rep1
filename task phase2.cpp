#include<iostream>
using namespace std;
int main()
{int sum,n;
cout<<"enter the number";
cin>>n;
while(n>=10)
{sum=0;
while(n!=0)
{sum=sum+n%10;
n=n/10;
}
n=sum;
}
cout<<"sum by recursion:"<<sum;

return 0;
}
