#include <iostream>
using namespace std;
int main ()
{
	int s=0,n;
	cout<<"nhap n ";cin>>n;
	if (n==0)
		cout<<"n khong hop le"<<endl;
	else{
		for (float i=1;i<=n;i++)
			s=s+(1/i);
		cout<<"tong la "<<s<<endl;
	}
	return 0;
}
