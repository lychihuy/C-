#include <iostream>
using namespace std;
void nhapmang(int a[], int n)
{
	
	for(int i=1;i<=n;i++){
	cout<<"nhap phan tu thu a["<<i<<"] ";
	cin>>a[i];	}
}
int duongchay(int a[],int n)
{
	int dem=1,x=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]-a[i]>0)
				dem++;
			else 
			{
				dem=1;
				//break;			
			}
		}
	}
	cout<<"duong chay dai nhat la: "<< dem <<endl;
	
}
int main ()
{
	int a[1000], n;
	cout<<"nhap so phan tu cua mang: ";cin>>n;
	nhapmang(a,n);
	duongchay(a,n);
	return 0;	
}
