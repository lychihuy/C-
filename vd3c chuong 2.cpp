#include <iostream.h>
#include <math.h>
int main ()
{
	float xa,ya,xb,yb,xc,yc,AB,BC,AC,S,P,cv,xg,yg;
	cout<<"nhap toa do diem a ";cin>>xa>>ya;
	cout<<"nhap toa do diem b ";cin>>xb>>yb;
	cout<<"nhap toa do diem c ";cin>>xc>>yc;
	AB=sqrt(((xb-xa)*(xb-xa))+((yb-ya)*(yb-ya)));
	AC=sqrt(((xc-xa)*(xc-xa))+((yc-ya)*(yc-ya)));
	BC=sqrt (((xc-xb)*(xc-xb))+((yc-yb)*(yc-yb)));
	P=(AB+AC+AC)/2;
	cv=2*P;
	S=sqrt(P*(P-AB)*(P-AC)*(P-BC));
	xg=(xa+xb+xc)/3;
	yg=(ya+yb+yc)/3;
	cout<<"chu vi la "<<cv<<endl;
	cout<<"dien tich la "<<S<<endl;
	cout<<"toa do trog tam la "<<"("<<xg<<";"<<yg<<")"<<endl;
	return 0;
}
	
	
	

	
	