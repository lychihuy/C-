#include <iostream>
#include<math.h>
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
double tinhtbnhan(int a[],int n)
{
		int tich = 1, dem = 0;
		for(int i = 0; i<n;i++){
			if(a[i]>0)
			{
				dem++;
				tich = tich * a[i];
			}
		}
		if (dem == 0){
			cout<<"khong the thuc hien";
		}
		double kq=pow(tich, 1.0/dem);
		return kq;
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
	cout<<"trung binh nhan cua mang la: "<<tinhtbnhan(a,n)<<endl;
	return 0;	
}
