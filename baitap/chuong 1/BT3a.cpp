#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double a,b,c,d, Max, Min;
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
	cout<< "so lon nhat la "<<Max<<endl;
		Min = a;
	if(Min>b)
		Min=b;
	if(Min>c)
		Min=c;
	if(Min>d)
		Min=d;
	cout<< "so nho nhat la "<<Min<<endl;
	return 0;
}
