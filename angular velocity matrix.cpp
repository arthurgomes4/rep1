#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<"enter the rotational matrix derivative (3x3)";
	float rot[3][3];
	int i,j,k;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	cin>>rot[i][j];
	float yaw,pitch,roll,w[3][3];
	cout<<"enter the yaw angle in degrees";
    cin>>yaw;
	cout<<"enter the pitch angle in degrees";
    cin>>pitch;
	cout<<"enter the roll angle in degrees";
    cin>>roll;
    float trans[3][3]={cos(yaw)*cos(pitch),sin(yaw)*cos(pitch),-1*sin(pitch),( sin(roll)*cos(yaw)*sin(pitch) - sin(yaw)*cos(roll)),( cos(yaw)*cos(roll) + sin(roll)*sin(yaw)*sin(pitch)),sin(roll)*cos(pitch),( sin(yaw)*sin(roll) + cos(roll)*cos(yaw)*sin(pitch) ),( sin(yaw)*sin(pitch)*cos(roll) - sin(roll)*cos(yaw)),cos(roll)*cos(pitch)};
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
    {w[i][j]=0;
     for(k=0;k<3;k++)
     w[i][j]=w[i][j]+rot[i][k]*trans[k][j];
  	cout<<w[i][j]<<" ";
	  }
    cout<<endl;
	}
  return 0;  
}
