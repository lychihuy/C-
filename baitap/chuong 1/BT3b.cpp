#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float a,b,c,d;
	cout<<"nhap lan luot a b c d ";
	cin>>a>>b>>c>>d;
	
	if (a>b)
	{
		float temp=a;
		a=b;
		b=temp;
	}
	if (a>c)
	{
		float temp=a;
		a=c;
		c=temp;
	}
	if (a>d)
	{
		float temp=a;
		a=d;
		d=temp;
	}
	if (b>c)
	{
		float temp=b;
		b=c;
		c=temp;
	}
	if (b>d)
	{
		float temp=b;
		b=d;
		d=temp;
	}
	if (c>d)
	{
		float temp=c;
		c=d;
		d=temp;
	}
	cout<<"thu tu tang dan "<<a<<";"<<b<<";"<<c<<";"<<d<<endl;
	return 0;
}
