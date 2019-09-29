#include<iostream>
using namespace std;
class stack
{int a[100],n,i;
public: void input();
void display();
void push();
void pop();
};
int main()
{stack obj;
obj.input();
int choice;
do
{cout<<"enter choice\n1-push\n2-pop\n3-display\n0-exit";
cin>>choice;
switch (choice)
{case 1:{obj.push();break;}
case 2:{obj.pop();break;}
case 3:{obj.display();break;}
case 0:{break;}
default:{cout<<"error in choice";break;}
}}
while(choice!=0);
return 0;
}

void stack::display()
{for(i=n-1;i<=0;i--)
{cout<<"* "<<a[i]<<" *";
cout<<endl;
}
}

void stack::input()
{cout<<"enter the number of elements in the stack";
cin>>n;
cout<<"enter the elements";
for(i=0;i<n;i++)
cin>>a[i];
for(i=n-1;i<=0;i--)
{cout<<"* "<<a[i]<<" *"<<i;
cout<<endl;
}
}

void stack::push()
{cout<<"enter element to be pushed";
int x;
cin>>x;
a[n]=x;
n=n+1;
}

void stack::pop()
{
n--;
}

