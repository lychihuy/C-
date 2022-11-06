#include <iostream>
using namespace std;
int main ()
{
	int n,a[100];
	cout<<"nhap n ";
	cin>>n;
	for (int i=0;i<n;i++){
		cout<<"nhap phan tu thu "<<i+1<<" ";
		cin>>a[i];
	}
	
	int s=0;
	for (int i=0;i<n;i++)
		s=s+a[i];
	cout<<"tong cac phan tu la "<<s<<endl;
	return 0;
}
