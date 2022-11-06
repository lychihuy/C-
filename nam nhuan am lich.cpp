#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a;
	cout<<"nhap nam ";cin>>a;
	if (a%19==0||a%19==3||a%19==6||a%19==9||a%19==11||a%19==14||a%19==17)
	cout<<"nam "<<a<<" la nam nhuan am lich "<<endl;
	else 
	cout<<"nam "<<a<<" khong phai nam nhuan am lich "<<endl;
	return 0;	
}
