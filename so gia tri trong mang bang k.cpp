#include <iostream>
using namespace std;
int main ()
{
	int n,a[100],k;
	cout<<"nhap n ";
	cin>>n;
	cout<<"nhap k= ";
	cin>>k;
	for (int i=0;i<n;i++){
		cout<<"nhap phan tu thu "<<i+1<<" ";
		cin>>a[i];
	}
	int dem=0;
	for (int i=0;i<n;i++)
		if	(a[i]==k)
		dem++;
	cout<<"so gia tri bang k la "<<dem<<endl;
	return 0;
}
