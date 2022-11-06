#include <iostream>
using namespace std;
int main ()
{
	int m,y;
	cout<<"nhap vao thang nam ";
	cin>>m>>y;
	switch (m)
	{
		case 1: cout<<"31 ngay "<<endl;
		break;
		case 3: cout<<"31 ngay "<<endl;
		break;
		case 5: cout<<"31 ngay "<<endl;
		break;
		case 7: cout<<"31 ngay "<<endl;
		break;
		case 8: cout<<"31 ngay "<<endl;
		break;
		case 10: cout<<"31 ngay "<<endl;
		break;
		case 12: cout<<"31 ngay "<<endl;
		break;
		case 4: cout<<"30 ngay "<<endl;
		break;
		case 6: cout<<"30 ngay "<<endl;
		break;
		case 9: cout<<"30 ngay "<<endl;
		break;
		case 11: cout<<"30 ngay "<<endl;
		break;
		case 2:
			if(y%4==0)
			cout<<"co 29 ngay "<<endl;
			else
			cout<<"co 28 ngay "<<endl;
			break;
		default: if (m>12)
			cout<<"khong co thang "<<m<<endl;
		break;
	}	
	return 0;
}
