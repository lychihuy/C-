#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double a,b,x;
	cout<<"nhap he so a ";cin>>a;
	cout<<"nhap he so b ";cin>>b;
	if (a==0){
		if (b==0)
			cout<<"PT vo so nghiem"<<endl;
		else
			cout<<"PT vo nghiem"<<endl;
	}
	else{
		if (b==0)
			cout<<"PT co nghiem la x=0"<<endl;
		else{
			x=-b/a;
			cout<<"PT co nghiem la x= "<<x<<endl;
		}
	}
	return 0;
}	
