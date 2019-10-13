#include<iostream>
#include<cmath>
using namespace std;
class matrix
{
  int a[10][10],b[10][10],r1,r2,c1,c2;
public:
  void multi();
  void norm();
  void transpose();
  void deter();
  void inverse();
  matrix();
};
matrix::matrix()
{
  int i,j;
  cout<<"enter the rows and coumns of matrix A";
  cin>>r1>>c1;
  cout<<"enter the rows and coumns of matrix B";
  cin>>r2>>c2;
  cout<<"enter the elements of matrix A";
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    {
      cin>>a[i][j];
      cout<<a[i][j];
     }
     cout<<endl;
  }
  cout<<"enter the elements of matrix B";
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    {
      cin>>b[i][j];
      cout<<b[i][j];
     }
     cout<<endl;
  }
}
void matrix::multi()
{
  int i,j,k,x;
  if(c1==r2)
  {
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c2;j++)
      {
        x=0;
        for(k=0;k<c1;k++);
        x=x+a[i][k]*b[k][j];
        cout<<" "<<x;
        }
        cout<<endl;
    }
  }
 else
 return;
}
void matrix::norm()
{
  cout<<"a or b";
  char ch;int sum=0,i,j;
  cin>>ch;
  if(ch=='a')
  {
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      sum=sum+a[i][j]*a[i][j];
    }
      cout<<sqrt(sum);
  }
  else
  {
    for(i=0;i<r2;i++)
    {
      for(j=0;j<c2;j++)
      sum=sum+b[i][j]*b[i][j];
    }
      cout<<sqrt(sum);

  }
}
void matrix::transpose()
{
  cout<<"a or b";
  char ch;int i,j;
  cin>>ch;
  if(ch=='a')
  {
    for(i=0;i<c1;i++)
    {
      for(j=0;j<r1;j++)
      cout<<a[i][j];
    }
      cout<<endl;
  }
  else
  {
    for(i=0;i<c2;i++)
    {
      for(j=0;j<r2;j++)
      cout<<b[i][j];
    }
      cout<<endl;

  }
}
void matrix::deter()
{ return;            //work in progress
}

void matrix::inverse()
{return;
}






int main()
{
matrix obj;
obj.norm();
obj.transpose();
obj.multi();
return 0;
}
