#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float yaw,pitch,roll,x,y,z,px,py,pz;
    cout<<"enter the yaw angle in degrees";
    cin>>yaw;
	cout<<"enter the pitch angle in degrees";
    cin>>pitch;
	cout<<"enter the roll angle in degrees";
    cin>>roll;
	cout<<"enter the local reference point's world coordinates";
	cin>>x>>y>>z;
	cout <<"enter the local coordinates of the point";
	cin>>px>>py>>pz;
	float wx,wy,wz;
	wx=cos(yaw)*cos(pitch)*px + py*( sin(roll)*cos(yaw)*sin(pitch) - sin(yaw)*cos(roll) ) + pz*( sin(yaw)*sin(roll) + cos(roll)*cos(yaw)*sin(pitch) ) + x;
	wy=sin(yaw)*cos(pitch)*px + py*( cos(yaw)*cos(roll) + sin(roll)*sin(yaw)*sin(pitch) ) + pz*( sin(yaw)*sin(pitch)*cos(roll) - sin(roll)*cos(yaw) ) + y;
    wz=-1*px*sin(pitch) + py*sin(roll)*cos(pitch) + pz*cos(roll)*cos(pitch) + z;	
    cout<<"the world coordinates are "<<wx<<" "<<wy<<" "<<wz;
return 0;
}
