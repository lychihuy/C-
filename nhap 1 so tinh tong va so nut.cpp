#include <iostream.h>
int main ()
{
	int a, tong =0;
	cout<<"nhap so vào ";
	cin>>a;
	while (a>0){
		int y=a%10;
		tong+=y;
		a=a/10;
	}
	cout<<tong<<endl;
	int i=tong%10;
	cout<<"nut: "<<i<<endl;
	if (i==0)
	cout<<"bu"<<endl;
}