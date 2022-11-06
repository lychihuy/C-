#include <iostream>
#include <math.h>
using namespace std; 
int main ()
{
	float xa,ya,xb,yb,xc,yc,AB,BC,AC,S,P,cv,xg,yg,r,r1,snt,sngt,pi=M_PI;
	cout<<"nhap toa do diem a ";cin>>xa>>ya;
	cout<<"nhap toa do diem b ";cin>>xb>>yb;
	cout<<"nhap toa do diem c ";cin>>xc>>yc;
	AB=sqrt(((xb-xa)*(xb-xa))+((yb-ya)*(yb-ya)));
	AC=sqrt(((xc-xa)*(xc-xa))+((yc-ya)*(yc-ya)));
	BC=sqrt (((xc-xb)*(xc-xb))+((yc-yb)*(yc-yb)));
	P=(AB+AC+AC)/2;
	cout<<"AB = "<<AB <<endl;
	cout<<"AC = "<<AC<<endl;
	cout<<"BC = "<<BC<<endl;
	cout<<"herong =  "<<P<<endl;
	cv=AB+AC+BC;
	S=sqrt(P*(P-AB)*(P-AC)*(P-BC));
	xg=(xa+xb+xc)/3;
	yg=(ya+yb+yc)/3;
	r=S/P;
	snt=r*r*M_PI;
	r1=(AB*AC*BC)/4*S;
	sngt=r1*r1*M_PI;
	
	cout<<"chu vi la "<<cv<<endl;
	cout<<"dien tich la "<<S<<endl;
	cout<<"toa do trog tam la "<<"("<<xg<<";"<<yg<<")"<<endl;
	cout<<"dien tich duong tron noi tiep la "<<snt<<endl;
	cout << "dien tich duong tron ngoai tiep la " << sngt << endl;
	return 0;
}
	
	
