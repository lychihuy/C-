#include <iostream>
using namespace std;
void nhapmang (int a[], int n)
{
	for (int i=0;i<n;i++){	
		cout<<"nhap phan tu thu a["<<i<<"]: ";
		cin>>a[i];}
}
void xuatmang (int a[],int n)
{
	for(int i=0;i<n;i++)
		cout <<a[i] <<" ";	
}
int timkiem(int a[],int n,int x)
{
		int vt=0;
		while (vt < n && a[vt] != x)
			vt++;
		if (vt<n)
			return vt;
		else 
			return -1;
}
bool songuyento(int soA)
{
	int dem = 0;
	for(int i = 1; i <= soA; i++)
	{
		if(soA % i == 0) dem++;
	}
	if(dem>2) return false;
	return true;
	
}
bool kiemtramang (int a[], int n)
{
	int dem=0;
	for (int i=0;i<n;i++)
		if(songuyento(a[i]))
			dem++;
	if (dem==n)
		return true;
	return false;
			
}
int main ()
{
	int a[1000],n,x;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	nhapmang(a,n);
	cout <<"xuat mang: ";
	xuatmang(a,n);
	cout<<endl;
	cout<<"nhap phan tu can tim kiem: ";
	cin>>x;
	int kq = timkiem(a,n,x);
	cout<<"a["<<kq<<"]"<<endl;
	cout<<endl;
	if(kiemtramang(a,n))
		cout<<"mang toan la so nguyen to"<<endl; 
	else cout<<"mang khong toan la so nguyen to"<<endl;
	return 0;	
}
