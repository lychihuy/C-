//Nhap vao ban kinh cua mot hinh tron. Hay tinh chu vi va dien tich  
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int r;
	double pi=M_PI, C, S;
	cout<<"nhap vao ban kinh cua hinh tron ";cin>>r;
	C=2*M_PI*r;
	S=r*r*M_PI;
	cout<<"chu vi cua hinh tron la "<<C<<endl;
	cout<<"dien tich cua hinh tron la "<<S<<endl;
	return 0;
}
