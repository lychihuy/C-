#include <iostream>
using namespace std;
#include <math.h>
int main ()
{
	double a,b,c,cv,s,h,p;
	cout << "Nhap so do canh a ";
	cin >> a;
	cout << "Nhap so do canh b ";
	cin >> b;
	cout << "Nhap so do canh c ";
	cin >> c;
	p=(a+b+c)/2;
	cv=2*p;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	h=(s*2)/a;
	cout<<"Chu vi cua tam giac la "<<cv<<endl;
	cout<<"Dien tich cua tam giac la "<<s<<endl;
	cout<<"Chieu cao cua tam giac la "<<h<<endl;
	return 0;
}	
