#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a,b,c,x,x1,x2,delta;
	cout<<"nhap he so a ";cin>>a;
	cout<<"nhap he so b ";cin>>b;
	cout<<"nhap he so c ";cin>>c;
	delta=(b*b)-(4*a*c);
	cout<<"delta = "<<delta<<endl;
	if (a==0)
	{
		if(b==0)
			if(c==0)
				cout<<"PT vo so nghiem"<<endl;
			else
				cout<<"PTVN"<<endl;
		else
			cout<<"PT co nghiem la x= "<<-c/(b*1.0)<<endl;
	}
	else
	{
		if (delta==0)
			cout<<"PT co nghiem kep x1=x2= "<<-b/(2*a*1.0)<<endl;
		else 
		{
			if (delta<0)
				cout<<"PTVN"<<endl;
			else		
			{
				cout<<"PT co nghiem la x1= "<<(-b-sqrt(delta))/(2*a)<<endl;
				cout<<"                x2= "<<(-b+sqrt(delta))/(2*a)<<endl;
			}	
		}
	}
	return 0;
}
