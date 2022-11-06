#include <iostream.h>
using namespace std;
int UCLN(int a, int b)
{
	if (a==0||b==0){
		cout<<a+b;
	}else
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
	float a,b,c,d,tong,hieu,tich,thuong,u;
	int uc1, uc2, uc3, uc4;
	cout<<"nhap tu so 1 ";cin>>a;
	cout<<"nhap mau so 1 ";cin>>b;
	cout<<"nhap tu so 2 ";cin>>c;
	cout<<"nhap mau so 2 ";cin>>d;
	if (b==0||d==0)
		cout<<"nhap sai, moi nhap lai "<<endl;
	else{
	
 		uc1 = UCLN(a*d+b*c, b*d);
		if(uc1==0) cout<<"tong la "<<a*d+b*c<<"/"<<b*d<<endl;
		else cout<<"tong la "<<(a*d+b*c)/uc1<<"/"<<(b*d)/uc1<<endl;
		
		 uc2 = UCLN(a*d-b*c, b*d);
		if(uc2==0) cout<<"hieu la "<<a*d-b*c<<"/"<<b*d<<endl;
		else cout<<"hieu la "<<(a*d-b*c)/uc2<<"/"<<(b*d)/uc2<<endl;
		
		 uc3 = UCLN(a*c, b*d);
		if(uc3==0) cout<<"tich la "<<a*c<<"/"<<b*d<<endl;
		else cout<<"tich la "<<(a*c)/uc3<<"/"<<(b*d)/uc3<<endl;
		
		 uc4 = UCLN(a*d, b*c);
		 //cout<<uc4;
		if(uc4==0) cout<<"thuong la "<<a*d<<"/"<<b*c<<endl;
		else cout<<"thuong la "<<(a*d)/uc4<<"/"<<(b*c)/uc4<<endl;
		
	
	}
	return 0;
}

