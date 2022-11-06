#include <iostream>
using namespace std;
int max(int a[],int n)
{
      if(n==1) return a[0];
      if (a[n-1]>max(a,n-1)) return a[n-1];
      return max(a,n-1);
}
int main ()
{
	int n, a[100],i;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	if (n<=0)
		cout<<"moi nhap lai";
	else
	{
		for (int i=0;i<n;i++)
			{ 
				cout<<"a["<<i<<"]";
				cin>>a[i];
			}
		cout<<max (a,n)<<endl;}
	return 0;	
}
