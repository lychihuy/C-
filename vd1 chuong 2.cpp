#include <iostream.h>
#include <math.h>
int main ()
{
	int n, tong=0;
	cout<<"nhap n ";
	cin>>n;
	while(n>0)
	{
		int i=n%10;
		n=n/10;
		tong=tong+i;
	}
	
	cout<<"tong la "<<tong<<endl;
	return 0;
}