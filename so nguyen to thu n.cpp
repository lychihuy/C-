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
	int n, i= 2,dem=0;
	cout<<"nhap n ";cin>>n;
	while(true)
	{
		if(soNguyenTo(i))
			dem++;
		if (dem==n){
			cout<<"so nguyen to thu "<<n<< " la "<<i;
			break;
		}
		i++;
	}
	return 0;
}
