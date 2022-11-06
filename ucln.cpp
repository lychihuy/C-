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
	int a,b,BCNN;
	cin>>a>>b;
	cout<<"UCLN la "<<UCLN(a,b)<<endl;
	BCNN=(a*b)/UCLN(a,b);
	cout<<"BCNN la "<<BCNN<<endl;
}


	
		
	
