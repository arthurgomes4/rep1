#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float yaw,pitch,roll,x,y,z,lx,ly,lz,wx,wy,wz,px,py,pz;
	cout<<"enter the yaw angle in degrees";
    cin>>yaw;
	cout<<"enter the pitch angle in degrees";
    cin>>pitch;
	cout<<"enter the roll angle in degrees";
    cin>>roll;
	cout<<"enter the local reference point's world coordinates";
	cin>>x>>y>>z;
	cout <<"enter the world coordinates of the point";
	cin>>wx>>wy>>wz;
	px=wx-x;
	py=wy-y;
	pz=wz-z;
	lx=cos(yaw)*cos(pitch)*px  + sin(yaw)*cos(pitch)*py + -1*pz*sin(pitch);
	ly=px*( sin(roll)*cos(yaw)*sin(pitch) - sin(yaw)*cos(roll) ) + py*( cos(yaw)*cos(roll) + sin(roll)*sin(yaw)*sin(pitch) ) + pz*sin(roll)*cos(pitch);
	lz=px*( sin(yaw)*sin(roll) + cos(roll)*cos(yaw)*sin(pitch) ) + py*( sin(yaw)*sin(pitch)*cos(roll) - sin(roll)*cos(yaw) ) + pz*cos(roll)*cos(pitch);
	cout<<"the world coordinates are "<<lx<<" "<<ly<<" "<<lz;
return 0;
}
