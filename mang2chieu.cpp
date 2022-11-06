#include <iostream>
using namespace std;
#define M 3
#define N 3
void nhapmang (int a[][N], int m, int n)
{
	for (int i=0;i<m;i++)
	for (int j=0;i<n;i++)	
		//cout<<i<<j;
		cin>>a[i][j];
}
void xuatmang (int a[][N], int m, int n)
{
	for(int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			cout <<a[i][j] <<" ";
	cout<<endl;	
}
int main ()
{
	int a[M][N], m, n;
	nhapmang(a, 3, 3);
	cout <<"xuat mang: ";
	xuatmang(a, 3, 3);
	return 0;
}
