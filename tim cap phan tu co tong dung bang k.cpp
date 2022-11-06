#include <iostream>
using namespace std;
void nhapmang(int a[],int n)
{
	for (int i=0;i<n;i++){
		cout<<"nhap phan tu thu a["<<i<<"]: ";
		cin>>a[i];	}
}
void xuatmang(int a[],int n)
{
		for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int timphantu (int a[],int n,int k)
{
	cout<<"cap so can tim la: ";
	for(int i=0;i<n;i++)
	for (int j=i+1;j<n;j++)	
	{
		if (a[i]+a[j]==k)
		cout<<"("<<a[i]<<" "<<a[j]<<")";
	}
}
int main ()
{
	int a[1000],n,k;
	cout<<"moi nhap vao so phan tu cua mang: ";cin>>n;
	nhapmang(a,n);
	cout<<endl;
	cout<<"xuat mang: ";
	xuatmang(a,n);
	cout<<endl;
	cout<<"moi nhap vao k ";
	cin>>k;
	timphantu(a,n,k);
	return 0;	
}
