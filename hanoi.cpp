-#include<iostream>
using namespace std;
int moves=0;
void hanoi(int n,char source,char temp,char destination)
{if(n==1){
cout<<"Disc 1 moves from "<<source<<" to "<<destination<<endl;
moves++;
return;
}
hanoi(n-1,source,destination,temp);
cout<<"Disc"<<n<<"from"<<source<<"to"<<destination<<endl;
moves++;
hanoi(n-1,temp,source,destination);
}

int main()
{cout<<"enter the number of discs";
int n;
cin>>n;
hanoi(n,'a','b','c');
return 0;
}
