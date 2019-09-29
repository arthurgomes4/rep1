#include<iostream>
#include<string.h>

using namespace std;


int main()
{int i,j;
cout<<"enter the sentence";
char ar[100],sr[20],ch;
gets(ar);
puts(ar);
cout<<"\nenter the string to be searched";
gets(sr);
ch=sr[0];
for(i=0;i<strlen(ar);i++)
if(ch==ar[i])
{
for(j=0;j<strlen(sr);j++)
{
if(ar[i+j]!=sr[j])
break;
}
if(j==strlen(sr))
cout<<"\nfound";

}


return 0;
}
