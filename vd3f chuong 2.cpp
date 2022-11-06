#include <iostream.h>
#include <math.h>
int main ()
{
	double a,b,c,d, Max, max2;
	cout<<"nhap so a ";cin>>a;
	cout<<"nhap so b ";cin>>b;
	cout<<"nhap so c ";cin>>c;
	cout<<"nhap so d ";cin>>d;
	Max = a;
	if(Max<b)
		Max=b;
	if(Max<c)
		Max=c;
	if(Max<d)
		Max=d;
	
	max2=a;
	if (a<Max&&a>max2)
		max2=a;
	if (b<Max&&b>max2)
		max2=b;	
	if (c<Max&&c>max2)
		max2=c;
	if (d<Max&&d>max2)
		max2=d;
	cout<<"so lon thu 2 la "<<max2<<endl;
	return 0;
}
	