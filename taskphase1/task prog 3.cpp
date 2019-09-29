#include<iostream>
#include<string.h>
using namespace std;
int main()
{cout<<"enter the string";
char s1[100],s2[100];
gets(s1);
for(int i=0;i<strlen(s1);i++)
s2[i]=s1[i];
cout<<"the strings has been copied\n";puts(s2);
return 0;
}
