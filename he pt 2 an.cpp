#include <iostream>
using namespace std;
int main ()
{
	float a1,a2,b1,b2,c1,c2,Dx,Dy,D,x,y;
	cout<<"he pt co dang a1*x + b1*y = c1"<<endl;
	cout<<"              a2*x + b2*y = c2"<<endl;
	cout<< "nhap lan luot a1 b1 c1 a2 b2 c2 ";
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	D=a1*b2-a2*b1;
	Dx=c1*b2-c2*b1;
	Dy=a1*c2-a2*c1;
	x=Dx/D;
	y=Dy/D;
	cout<<"x= "<<x<<endl;
	cout<<"y= "<<y<<endl;
	return 0;
}
