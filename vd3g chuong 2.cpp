#include <iostream.h>
#include <math.h>
int main ()
{
	double a ,b,c,d,dem;
	cout<<"nhap so a ";cin>>a;
	cout<<"nhap so b ";cin>>b;
	cout<<"nhap so c ";cin>>c;
	cout<<"nhap so d ";cin>>d;
	dem=1;
	if(a!=b&&a!=c&&a!=d)
		dem++;
	if(b!=c&&b!=d)
		dem++;
	if(c!=d)
		dem++;
	if (a==b&&a==c&&c==d)
		dem=1;
	cout<<"co "<<dem<<" gia tri "<<endl;return 0;
	cout<<"co "<<dem<<" gia tri khac nhau"<<endl;
	return 0;
}
	

	