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
void phantichthuasonguyento(int n){
	if(n<=1)
		cout<<"so vua nhap khong thoa yeu cau"<<endl;
	else
	{
		cout<<n <<" = ";
		for(int i = 2; i<= n ;i++)
		{
			while (soNguyenTo(i) && (n%i == 0))
			{
				cout<<i<<" ."<<" ";
				n = n/i;
			}
		}
	}	
}
int main ()
{
	int n;
	cout<<"nhap n ";cin>>n;
	phantichthuasonguyento(n);
	return 0;
}
