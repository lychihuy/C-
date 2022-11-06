#include <iostream>
#include <math.h>
using namespace std;
int UCLN(int a, int b)
{
	if (a==0||b==0){
		cout<<a+b;
	}
	{
		while (a!=b)
		{
			if (a>b)
			a=a-b;
			else
			b=b-a;
		}
		return a;
	}
}
int main ()
{
	int a,b;
	cout<<"nhap lan luot a va b ";
	cin>>a>>b;
	cout<<"UCLN la "<<UCLN(a,b)<<endl;
}
