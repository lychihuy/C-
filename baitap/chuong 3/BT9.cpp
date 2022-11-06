#include <iostream>
using namespace std;
int main ()
{
	float m=0,dau=1,t=1,tong=0,x; int n;
	cout<<"nhap n ";
	cin>>n;
	cout<<"nhap x ";
	cin>>x;
	if (n==0)
		cout<<"n khong hop le"<<endl;
	else{
		for (float i=1;i<=n;i++){
			m=m+(1.0/i);
			t=t*x;
			tong += dau * t/m;
			dau=-dau;
		}
		cout<<"tong la "<<tong<<endl;
	}
	return 0;
}
