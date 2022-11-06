#include <iostream>
using namespace std;
bool soNguyenTo(int soA)
{
	int dem = 0;
	for(int i = 1; i <= soA; i++)
	{
		if(soA % i == 0) dem++;
	}
	if(dem>2) return false;
	return true;
}
int main ()
{
	int n,dem=0;
	cout<<"nhap n ";cin>>n;
	for (int i=2;i<=n;i++)
	{
		if(soNguyenTo(i))
			dem++;
	}
	cout<<"so luong so nguyen to nho hon hoac bang "<< n << " la "<<dem<<endl;
	return 0;
}
