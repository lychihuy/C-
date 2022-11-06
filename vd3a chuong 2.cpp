#include <iostream.h>
#include <math.h>
int main ()
{
	int t,h,p,s;
	cout<<"nhap thoi gian (s) ";cin>>t;
	
		h=t/3600;
		t=t%3600;
		p=t/60;
		s=t%60;
		
	cout<<h<<"h "<<p<<"m "<< s<<"s"<<endl;
	return 0;
}